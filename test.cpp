#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<ll, ll>> points(2*n);
    for(int i = 0; i < n; ++i) {
        ll a, b;
        cin >> a >> b;
        points[2*i] = {a, 1};
        points[2*i+1] = {b, -1};
    }
    sort(points.begin(), points.end());
    ll greetings = 0, cnt = 0;
    for(auto& p : points) {
        if(p.second == -1) ++cnt;
        else greetings += cnt;
    }
    cout << greetings << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}