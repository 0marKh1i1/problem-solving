#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> freq(101, 0);
    vector<int> sums(k+1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    for (int i = 1; i <= 100; i++) {
        for (int j = i; j <= 100; j++) {
            int sum = i + j;
            if (sum > k) break;
            if (i == j) sums[sum] += freq[i] * (freq[i] - 1) / 2;
            else sums[sum] += freq[i] * freq[j];
        }
    }
    for (int x = 1; x <= k; x++) {
        cout << sums[x] << " ";
    }
    return 0;
}