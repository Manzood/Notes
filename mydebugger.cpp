#include<bits/stdc++.h>
using namespace std;

vector <string> splitter (string s) {
	s+=',';
	vector <string> res;
	while (!s.empty()) {
		res.push_back(s.substr(0,s.find(',')));
		s=s.substr(s.find(',')+1);
	}
	return res;
}

#define debug(...) 

int main() {
	string s="Hello,my,name,is,something";
	vector <string> res=splitter(s);
	for (auto x: res) {
		cout<<x<<endl;
	}
}