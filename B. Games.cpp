#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define str string
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define pb push_back
#define pf push_front
#define ff first
#define ss second
#define lli(x) long long i=0;i<x;++i
#define lln(x) long long x; cin>>x
using namespace std;
///////////////////////////////////////
void sol(){
    
lln(n);
vector<pair<ll,ll>> vp(n);
for(lli(n)){
    cin>>vp[i].ff>>vp[i].ss;
}
ll c=0;
for(ll i=0;i<n;++i){
    for(ll j=0;j<n;++j){
        if(j!=i)
        c=(vp[i].ff==vp[j].ss)?c+1:c;
    }
}
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