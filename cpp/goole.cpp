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
#define MOD 1e9+7
#define ss second
#define ff first
#define endL "\n"
void sol();
int main() {
IO
/* ll t;
for(cin>>t;t--;) */
sol();
return 0;}



///////////////////////////////////////
void sol(){

ll n;
    cin >> n;
    ll l = 0, r = n;
    while (l < r) {
        ll m = (l + r + 1) / 2;
        if (m * (m + 1) / 2 <= n) {
            l = m;
        } else {
            r = m - 1;
        }
    }
    cout << l << endL;

return;}
///////////////////////////////////////