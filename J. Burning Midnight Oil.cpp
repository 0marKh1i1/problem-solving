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
///////////////////////////////////////
ll tro(ll a,ll b,ll c){
    ll pw=1,ans=c,pwc=c/pow(b,pw);
    while(pwc>0){
        ans+=pwc;
        pw++;
        pwc=c/pow(b,pw);
    }
    /* cout<<ans<<endL; */
    return ans;
}
void sol(){

lln(n)
lln(k)
ll l=1,r=1e9,ans=0;
while(l<=r){
    ll mid=l+(r-l)/2;
    if(tro(n,k,mid)>=n){
        r=mid-1;
        ans=mid;
    }else l =mid+1;
}
cout<<ans;
return;}
///////////////////////////////////////
int main() {
IO
ll t=1;
if(isit)
cin>>t;
while (t--)
sol();
return 0;}
