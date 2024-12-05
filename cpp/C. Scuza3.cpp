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
ll bs(vector<ll> &vm,ll l,ll r,ll k){
    ll mid=l+(r-l+1)/2;
    if(l>r) 
        return r+1;
    if(vm[mid]<=k)
        return bs(vm,mid+1,r,k);
    else  
        return bs(vm,l,mid-1,k);
}
void sol(){

lln(n) lln(q)
vector<ll> vp(n),vm(n);
cin>>vp[0];
ll temp;
vm[0]=vp[0];
for(ll i=1;i<n;++i){
    cin>>temp;
    vp[i]=temp+vp[i-1];
    vm[i]=max(temp,vm[i-1]);
}

for(lli(q)){
    lln(k)
    ll a=0;
    ll ans = bs(vm,0,vm.size()-1,k)-1;
    if(ans>=0) a=vp[ans];
    cout<<a<<" ";
}
cout<<endL;
return;}
///////////////////////////////////////