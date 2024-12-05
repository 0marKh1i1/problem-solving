#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include<cassert>
using namespace std;


int main() {
    long long t, n, a, b, h;
    cin >> t;

    while (t--) {
        h = 0;
        cin >> n >> a >> b;

        while (n != a && n != b) {
            ++h;
            if (a < b) {
                a += 2;
                ++b;
            } else {
                b += 2;
                ++a;
            }
        }

        if ((a < n || b < n) && !(a == b && b == n && a == n)) {
            cout << "NO\n";
            continue;
        }

        cout << "YES " << h << endl;
    }



return 0;}
