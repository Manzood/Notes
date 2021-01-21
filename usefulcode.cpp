#include<bits/stdc++.h>
using namespace std;

//Useful debugging technique
#define debug(x) cout << (#x) << " is " << x << endl;


//Useful way to speed up computation for modulo operations
constexpr int MOD = 1000000007; // and other such popular modulo constants... constexpr allows the compiler to use its popular compiler optimisations


int main () {
	//using a map
		map <string, vector <string> > m;
	//suppose you have string s, and another string s2 based on what string you have, you can check the following
        string s, s2; char *st;
		m[s].push_back(s2);

	// EXAMPLE CODE
		class Solution {
		public:
		    vector<vector<string>> groupAnagrams(vector<string>& strs) {
		        map<string, vector <string> > m;
		        for (string s: strs) {
		            string s2=s;
		            sort(s2.begin(),s2.end());
		            m[s2].push_back(s);
		        }
		        vector <vector <string> > ans;
		        for (auto temp: m) {
		            ans.push_back(temp.second);
		        }
		        return ans;
		    }
		};
	//This was a LeetCode submission, where the idea for the code was taken from Errichto but I made the
	//submission anyway, as practce


	//how to get -infinity or +infinity :
		INT_MIN;
		INT_MAX;
	//could be subject to integer overflows, however


        int a, b;
	/* printf and scanf tricks */
		//1) Read but do not store
		scanf("%d %*s %d",&a, &b);
		//2) Read binary string
		scanf("%[01]s", st);
		// Similarly...
		scanf("%[0-9]s", st);
		scanf("%[^\n]s", st);
		//3) To read char


        #include <cstdio>
        using namespace std;

        int N;        		 // using global variables in contests can be a good strategy
        char *x;   		 // make it a habit to set array size a bit larger than needed

        // int main() { I've removed the declaration of main here to fit the code, but the variables being global is in general a "good" strategy, apparently
            scanf("%d\n", &N);
            while (N--) {                     			// we simply loop from N, N-1, N-2, ..., 0
                scanf("0.%[0-9]...\n", x);   			// `&' is optional when x is a char array
                                                        // please check scanf details in www.cppreference.com
                printf("the digits are 0.%s\n", x);
          // }
      // return 0;
	}
}
