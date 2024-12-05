#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
#define endL "\n"

const int MAX_X = 1000000;
vector<ll> precomputed(MAX_X + 1, 0);

void precompute() {
    for (ll a = 1; a <= MAX_X; ++a) {
        for (ll b = 1; b <= MAX_X - a; ++b) {
            ll max_c = min(MAX_X - a - b, MAX_X / (a + b + 1));
            if (max_c > 0) {
                precomputed[a + b + max_c]++;
            }
        }
    }
    for (int i = 1; i <= MAX_X; ++i) {
        precomputed[i] += precomputed[i - 1];
    }
}

void sol() {
    ll n, x;
    cin >> n >> x;
    if (x > MAX_X) {
        cout << 0 << endL;
        return;
    }
    cout << precomputed[x] << endL;
}

int main() {
    IO
    precompute();
    ll t;
    cin >> t;
    while (t--) {
        sol();
    }
    return 0;
}