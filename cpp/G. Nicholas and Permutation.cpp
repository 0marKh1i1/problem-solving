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
void sol(){

lln(n);
map<ll,ll> mp;
for(lli(n)){
    ll temp;
    cin>>temp;
    mp[temp]=i;
}
ll c=max({mp[1],mp[n],n-1-mp[1],n-1-mp[n]});
cout<<c;
return;}
///////////////////////////////////////
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}