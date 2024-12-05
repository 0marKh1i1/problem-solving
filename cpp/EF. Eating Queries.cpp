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
#define isit 1
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
void sol() {
    lln(n) lln(q)
    vector<ll> v(n);
    for(lli(n)){
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    vector<ll> prefix(n+1, 0);
    for(ll i=0; i<n; ++i){
        prefix[i+1] = prefix[i] + v[i];
    }
    for(lli(q)){
        lln(x)
        auto it = lower_bound(prefix.begin(), prefix.end(), x);
        if(it == prefix.end()){
            cout << -1 << endL;
        } else {
            cout << it - prefix.begin() << endL;
        }
    }
    return;
}