#include "bits/stdc++.h"
using namespace std;

bool comparator_function (int x, int y) {
    return x > y;
}

vector <int> global_v1;

int32_t main () {
    vector <int> v1, v2;
    // sorts v2 in ascending order based on the values in v1
    sort (v2.begin(), v2.end(), [&v1] (int val1, int val2) {
        return val1 < val2;
    });

    // alternatively, use the indexes
    // only works if v1 is global
    sort (v2.begin(), v2.end(), [] (int ind1, int ind2) {
        return global_v1[ind1] < global_v1[ind2];
    });

    // sorts v1 in descending order, because of the comparator function
    sort (v1.begin(), v1.end(), comparator_function);
}
