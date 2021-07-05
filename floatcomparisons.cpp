#include "bits/stdc++.h"
using namespace std;
const float eps = 1e-6f;

int32_t main () {
    float a = 6000.123f;
    float b = 6000.123f;
    if (fabs(a - b) < eps) printf ("Equal\n");
    else printf ("Unequal\n");
}
