//this code also includes tips for coding, or anything I've found useful
//hopefully, I won't forget about it for two years straight, but instead I'll come back to keep updating this
//Until I have a pretty decent tips/good template tutorial for myself to refer to, and from which I can build
//a future competitive coding template

#include<bits/stdc++.h>

#define debug(x) cout<<x<<endl;
using namespace std;

//another interesting template yoy can use, is 
#define int long long
// can easily help change a large amount of code if overflow is the issue. However, for main, int must be renamed to
// int32_t main() {...}
// another way to add long longs is by saying 
using ll = long long
// this is superior to typedef and #define, because it does not fail in some contexts, such as typecasting.

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	#ifndef ONLINE_JUDGE
		freopen("input","r",stdin);
		freopen("output","w",stdout);
	#endif

	//128 bit integer
	__int128_t x;
	x=2;

	//comparing floating point numbers
	double a,b;
	a=0.3;
	b=1.0;
	double c=a*a+0.1;
	if (abs(b-c)<1e-9) {
		//c and b are equal
	}

	string s;
	getline(cin,s);
}