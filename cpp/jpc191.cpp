#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define llj(i,x) long long i=0;i<x;++i
#define lli(x) long long i=0;i<x;++i
#define lln(x) long long x; cin>>x;
#define all(x) x.begin(), x.end()
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define ld long double
#define pf push_front
#define ll long long
#define pb push_back
#define str string
#define ss second
#define ff first
#define endL "\n"
const int MOD = 1000000007;
const int N = 1000001;

void sol();
int main() {
IO
ll t;
for(cin>>t;t--;)
sol();
return 0;}




///////////////////////////////////////
ll a[N], b[N];

ll p(ll c, ll d) {
    ll e = 1;
    while(d) {
        if(d & 1) e = (e * c) % MOD;
        c = (c * c) % MOD;
        d >>= 1;
    }
    return e;
}

void q() {
    a[0] = b[0] = 1;
    for(ll i = 1; i < N; i++) {
        a[i] = (a[i - 1] * i) % MOD;
        b[i] = p(a[i], MOD - 2);
    }
}
void sol(){

string v;
cin >> v;
vector<int> w(26);
for(char x : v) w[x - 'a']++;
int y = 0;
for(int i = 0; i < 26; i++) if(w[i] & 1) y++;
if(y > 1) {
    cout << 0 << endL;
    return;
}
ll z = a[v.size() / 2];
for(int i = 0; i < 26; i++) z = (z * b[w[i] / 2]) % MOD;
cout << z << endL;

return;}
///////////////////////////////////////