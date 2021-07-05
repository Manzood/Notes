//bitmasks can be used to iterate over all possible subsets of certain values.
//for example, consider the example problem where given a set of N numbers you need to return
//the number of such subsets that add up to a number X.
//This can be achieved by using a bitmask, where each bit represents wether or not the number is actually being used.
//For example, 0000001 in the bitmask would represent a subset with only the element with index 0 being considered for the sum.
//and 0000000 represents a subset where no number is being considered for the sum.
//I will add the example code for this as follows

#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int n,x;
	cin>>n>>x;
	vector <int> a(n);
	for (int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	int ans=0;
	for (int mask=0;mask<(1<<n);mask++) {
		int sumoftheset=0;
		for (int i=0;i<n;i++) {
			if (mask & (1<<i)) {
				sumoftheset+=a[i];
			}
		}
		if (sumoftheset==x)
			ans++;
	}
	cout<<ans<<endl;
}
