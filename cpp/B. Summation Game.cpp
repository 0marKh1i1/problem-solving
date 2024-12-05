#include<iostream>
#include <bits/stdc++.h>

#define ld long double
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const int N = 3e5 + 9, MOD = 998244353;

int a[N];

void doWork() {
    int n, k, x;
    cin >> n >> k >> x;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n, greater<int>());
    for (int i = 1; i <= n; i++) {
        a[i] += a[i - 1];
    }
    ll ans = -1e9;
    for (int i = 0; i <= k; i++) {
        ll sum = a[n] - a[i];
        if (i + x > n) {
            ans = max(ans, -sum);
        } else {
            ll temp = a[i + x] - a[i];
            ans = max(ans, sum - 2 * temp);
        }
    }
    cout << ans << "\n";
}

int main() {
    IO
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        //  cout << "Case #" << i << ": ";
        doWork();
    }
}