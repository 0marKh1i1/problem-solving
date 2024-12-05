#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
void sol();
int main() {
IO
ll t;
for(cin>>t;t--;)
sol();
return 0;}



////////////////////////////////////////
ll re(ll n) {
    while (n > 0) {
        if (n % 10 > 1) return 0;
        n /= 10;
    }
    return 1;
}

void sol() {
    ll n;
    cin >> n;
    if (re(n)) {
        cout << "YES\n";
        return;
    }
    for (ll i = 1; i * i <= n; ++i) {
        if (n % i == 0 && re(i) && re(n / i)) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
///////////////////////////////////////
