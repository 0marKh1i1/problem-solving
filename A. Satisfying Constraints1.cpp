#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start = INT_MIN, end = INT_MAX;
        vector<int> notEqual;
        while (n--) {
            int a, x;
            cin >> a >> x;
            if (a == 1) {
                start = max(start, x);
            } else if (a == 2) {
                end = min(end, x);
            } else {
                notEqual.push_back(x);
            }
        }
        if (start > end) {
            cout << 0 << "\n";
            continue;
        }
        for (int x : notEqual) {
            if (x >= start && x <= end) {
                end--;
            }
        }
        cout << max(0, end - start + 1) << "\n";
    }

    return 0;
}