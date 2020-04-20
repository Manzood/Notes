//File for testing out any new code I come across or want to try
//If it works, it'll probably be repurposed to a more aptly named file

#include<bits/stdc++.h>
using namespace std;

vector<string> stringsplitter(string s) {
	vector<string> result;
	while (s.size()!=0) {
		result.push_back(s.substr(0,s.find(',')));
		s=s.substr(s.find(',')+1);
	}
	return result;
}

template<typename T>
void debugfunc(T t) 
{
    cout<<t<<endl ;
}

template<typename T, typename... Args>
void debugfunc(T t,Args... args) {
	// get number of arguments
	//get string of arguments
	//print string with arguments
	cout<<t<<endl;
	debugfunc(args...);
}		

#define debug(...) debugfunc(__VA_ARGS__)

int main() {
	char x[10]="hello";
	char y[10]="b";
	debug(x);
	debug(y);
	debug(x,y);
}