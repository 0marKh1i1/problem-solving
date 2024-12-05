#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <unordered_map>
#include <numeric>
#include <set>
#include <vector>
/*i guess it's time to get busy living or get busy dying*/
#define ll long long
#define str string
#define all(x) x.begin(), x.end()
#define pb push_back

using namespace std;

void solve() {
    ll a, b, r,mn=10000000000000;
    cin >> a >> b >> r;
    for (ll i = 0; i <= r; i++)
    {
        ll ans = abs((a ^ i) - (b ^ i));
        mn = min(mn, ans);

    }
    cout << mn << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}