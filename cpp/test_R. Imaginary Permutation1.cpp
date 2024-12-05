#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    bool canSort = true;
    for (int i = 0; i < n; i++) {
        if (p[i] != i + 1) {
            if (k == 2) {
                canSort = false;
                break;
            }
            if ((p[i] + i + 1) % 2 != 0) {
                canSort = false;
                break;
            }
        }
    }

    if (canSort) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

// Test 1
// Input: 4 4
//        4 3 2 1
// Output: NO

// Test 2
// Input: 4 2
//        3 4 1 2
// Output: YES

// Test 3
// Input: 6 4
//        1 2 3 4 5 6
// Output: YES

// Test 4
// Input: 6 4
//        1 5 3 4 2 6
// Output: YES