#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(101, 0);
    vector<int> c(k+1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[a[i]]++;
    }
    for (int i = 1; i <= 100; i++) {
        for (int j = i; j <= 100; j++) {
            int sum = i + j;
            if (sum > k) break;
            if (i == j) c[sum] += b[i] * (b[i] - 1) / 2;
            else c[sum] += b[i] * b[j];
        }
    }
    for (int x = 1; x <= k; x++) {
        cout << c[x] << " ";
    }
    return 0;
}