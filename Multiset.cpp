#include<bits/stdc++.h>
using namespace std;

int32_t main () {
    multiset <int> s;

    // you can use it in the following ways

    // insertion
        s.insert(3);
        s.insert(5);

    // searching for the occurance of an element
        s.find(3);

    // using s.find in if statements
    // I think s.find() returns an iterator
        if (s.find(3) == s.end()) {
            printf("Not found\n");
        } else {
            printf("Found\n");
        }


    // deletion
        s.erase(s.find(3));

    return 0;
}
