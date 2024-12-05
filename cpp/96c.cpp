#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
#define endL "\n"
void sol();
int main() {
IO
ll t;
                                       for(cin>>t;t--;)
sol();
return 0;}
////////////////////////////////////////
void sol() {
ll n,q;
cin>>n>>q;
string s,t;
cin>>s>>t;

vector<vector<ll>> mp(n + 1, vector<ll>(26, 0));
vector<vector<ll>> mp1(n + 1, vector<ll>(26, 0));

for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < 26; j++) {
        mp[i + 1][j] = mp[i][j];
        mp1[i + 1][j] = mp1[i][j];
    }
    mp[i + 1][s[i] - 'a']++;
    mp1[i + 1][t[i] - 'a']++;
}

for (ll i = 0; i < q; i++) {
    ll l, r;
    cin >> l >> r;

    ll count = 0;
    for (ll j = 0; j < 26; j++) {
        ll mps = mp[r][j] - mp[l - 1][j];
        ll mpt = mp1[r][j] - mp1[l - 1][j];
        count += abs(mps - mpt);
    }

    cout << (count) / 2 << endL;
}
}
///////////////////////////////////////