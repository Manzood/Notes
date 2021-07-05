#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

// function implementation
// takes advantage of the binary implementation of b

long long power (long long a, long long b) {
	int result = 1;
	while (b) {
		if (b%2 == 1) result *= a;
		a *= a;
		b /= 2;
	}
	return result;
}

int main() {
	long long a, b;
	a = 3;
	b = 8;
	long long result = power (a, b);
	printf("%lld\n", result);
}
