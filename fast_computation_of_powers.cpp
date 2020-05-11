#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<iostream>

using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

//time complexity is O(log N), obviously

double getpow(double a,int b) {
	if (b==0) return 1;
	if (b==1) return a;
	if (b%2==0) {
		double t=getpow(a,b/2);
		return t*t;
	}
	else {
		double t=getpow(a,(b-1)/2);
		return a*t*t;
	}
}

int main() {
	double a;
	int b;
	cin>>a>>b;
	cout<<getpow(a,b);
}