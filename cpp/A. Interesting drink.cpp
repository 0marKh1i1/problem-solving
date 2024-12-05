#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define str string
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define llj(i,x) long long i=0;i<x;++i
#define lli(x) long long i=0;i<x;++i
#define lln(x) long long x; cin>>x
#define all(x) x.begin(), x.end()
#define pb push_back
#define pf push_front
#define ff first
#define ss second
#define endL "\n"
using namespace std;
///////////////////////////////////////
ll bs(ll a,vector<ll> b,ll l,ll r){
    ll mi = l+(r-l)/2;
    if(b[mi]==a){
        return mi;
    }
}
void sol(){

lln(n);
vector<ll> vs(n);
vector<ll> v=vs;
map<ll,ll> mp;
sort(all(vs));
for(lli(n)){
    cin>>v[i];
    mp[v[i]]++;
}
lln(q);
for(lli(q)){
    lln(m);
    ll temp = bs(m,v,0,v.size());

}

return;}
///////////////////////////////////////
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}  