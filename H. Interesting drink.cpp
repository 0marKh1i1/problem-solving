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
#define isit 0
void sol();
int main() {
IO
ll t=1;
if(isit)
cin>>t;
while (t--)
sol();
return 0;}
///////////////////////////////////////

ll bs(vector<ll> &v, ll l, ll r, ll a) {
    ll ans = 0;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if ( v[mid] <= a) {
            l = mid + 1;
        } else {
            ans = mid;
            r = mid - 1;
        }
    }
    return l;
}/**/
void sol() {
    lln(n)
    vector<ll> v(n);
    for(lli(n)){
        cin>>v[i];
    }
    sort(all(v));
    lln(q)
    for(lli(q)){
        lln(k)
        ll ans=bs(v,0,n-1,k);
        cout<<ans<<endL;
    }
    return;
}