### Notes on the knapsack problems and the different ways to solve it

1) Initial solution: solve it in O(N * W) time and space.

```
Take dp[N][W]
dp[i][j] -> the maximum possible value considering the first i elements and taking a weight of j
Therefore, The transitions are as follows:
    dp[i][j] = dp[i - 1][j];
    if (j - w[i] >= 0) dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);

Initial state: all values are 0
```

2) Better solution in terms of space complexity:
    O(N * W) time and O(W) space

```
Take dp[W], with all values initially zero;
dp[i] -> the maximum possible value that can be achieved with weight i
Therefore, the code is as follows:
    vector<int> dp(W + 1, 0);
    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = W - weights[i]; j >= 0; j--) {
            dp[j + weights[i]] = max(dp[j + weights[i]], dp[j] + values[i]);
        }
    }
```

3) Alternative solution by computing best value:
    O(sum(values)) space and O(N * sum(values)) time

```
    vector<int> dp(N * 1000 + 1, W + 1);
    dp[0] = 0;
    for (int i = 0; i < N; i++) {
        for (int j = N * 1000 - values[i]; j >= 0; j--) {
            dp[j + values[i]] = min(dp[j + values[i]], dp[j] + weights[i]);
        }
    }
    int answer = 0;
    for (int i = 0; i < N * 1000 + 1; i++) {
        if (dp[i] <= W) answer = i;
    }
```
