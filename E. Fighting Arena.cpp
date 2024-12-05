#include <iostream>
#include <cmath>
#define ll long long
#define ld long double
using namespace std;
int main() {
    ll R, S, T;
    cin >> R >> S >> T;
    ld c = 2 * R;
    ld sq = S * sqrt(2);
    ld r = T / sqrt(3); 
    if (c <= sq && R >= r) { 
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}