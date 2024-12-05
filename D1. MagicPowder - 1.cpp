#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
void sol();
int main() {
IO
ll t;
/* for(cin>>t;t--;) */
sol();
return 0;}



///////////////////////////////////////
ll f(ll m,vector<ll> a,vector<ll> b,ll k){
ll t = 0;
for(ll i=0;i<a.size();++i){
    if(m*a[i] > b[i]){
        t+= m*a[i] - b[i];
        if(t > k) return 0;
    }
}
return 1;
}
//11011101
//129
void sol() {
ll n,k;
cin>>n>>k;
vector<ll> a(n),b(n);
for(auto &u:a) cin>>u;
for(auto &u:b) cin>>u;

ll l=0,r=1e10;
while(l < r){
    ll mid= l+(r-l)/2;
    if(f(mid,a,b,k)) l=mid+1;
    else r=mid;
}
cout<<l-1;
return;
}
////////////////////////////////////
