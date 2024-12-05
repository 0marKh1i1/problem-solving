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
struct pior{
    ll a,b;
};
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
ll bs(vector<pair<ll,ll>> b,ll l,ll r,ll a){
    
    ll ans;
    while(l<=r){
        ll mid = l + (r-l)/2;
        /* if(r==l){
            if(b[mid].ss>a){
                ans=mid;
            }
                break;
        } */
        if(b[mid].ff>a){
            ans= mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
return ans;
}

void sol(){

lln(n)
vector<pair<ll,ll>> vp;
for(ll i=1;i<=n;i++){
    ll temp;
    cin>>temp;
    if(temp<i){
    vp.pb({temp,i});
    }
}
sort(all(vp));
/* for(auto &i:vp){
    cout<<i.ff<<" "<<i.ss<<endL;
} */
ll c=0;
for(lli((vp.end()-vp.begin()))){
    ll temp = bs(vp,0,(vp.end()-vp.begin()),vp[i].ss);
    /* if(temp!=(vp.end()-vp.begin())) */
    cout<<temp+1<<endL;
}

return;}
///////////////////////////////////////
