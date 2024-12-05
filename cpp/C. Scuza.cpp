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
void sol(){

lln(n) lln(q)
vector<pair<ll,ll>> vp(n);
cin>>vp[0].ff;
ll temp=vp[0].ff;
vp[0].ss=temp;
for(ll i=1;i<n;++i){
    cin>>vp[i].ff;
    temp+=vp[i].ff;
    vp[i].ss=temp;
}
sort(all(vp));
vector<ll> v(n);
for(lli(n)) v[i]=vp[i].ff; 
for(lli(q)){
    lln(k)
    ll ans = upper_bound(all(v),k)-v.begin();
    /* cout<<vp[ans-1].ss<<endl; */
    cout<<ans<<" ";
}
cout<<endL;
return;}
///////////////////////////////////////
/* vector<ll> presum(n);
ll temp;
cin>>temp;
presum[0]=temp;
for(ll i=1;i<n;i++){
    cin>>temp;
    presum[i]=temp+presum[i-1];

}
for(lli(q)){
    lln(k);

} */