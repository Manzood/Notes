#include <bits/stdc++.h>
using namespace std;

// the changes I've made are: the variables change and check just get rid of empty spaces in the arguments
// so yes, absolutely not a useful change
vector<string> vec_splitter(string s) {
	s += ',';
	vector<string> res;
	while(!s.empty()) {
		res.push_back(s.substr(0, s.find(',')));
		int check=s.find(',');
		int change=1;
		if (check<s.size()-1 && s[check+1]==' ')
			change++;
		s = s.substr(s.find(',') + change);
	}
	return res;
}
void debug_out(vector<string> __attribute__ ((unused)) args, __attribute__ ((unused)) int idx, __attribute__ ((unused)) int LINE_NUM) { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T) {
	if(idx > 0) cerr << ", "; else cerr << "Line(" << LINE_NUM << ") ";
	stringstream ss; ss << H;
	cerr << args[idx] << " = " << ss.str();
	debug_out(args, idx + 1, LINE_NUM, T...);
}

#ifdef local
#define debug(...) debug_out(vec_splitter(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
#else
#define debug(...) 42
#endif

int main() {
	int x = -1, y = 10000;
	double z = 0.2;
	string s = "beginner1010";
	long long b = 1LL << 60;

	debug(x, y, z, s, b);

	double aux = 1010.0;
	string code = "code";

	debug(code + "forces", -aux / 10 * 2.3);
	return 0;
}
