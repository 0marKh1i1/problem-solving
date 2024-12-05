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
struct poir{
    ll a,b;
};
ll l=0;
void sol();
int main() {
IO
/* ll t;
for(cin>>t;t--;) */
sol();
return 0;}
///////////////////////////////////////
void sol() {
lln(n) lln(k)
vector<ll> v(n);
for(lli(n)){
    cin>>v[i];
}
map<ll,ll> mp;
ll l=0,r =0,s=0,mx=0;
while(r<n){
    mp[v[r]]++;
    if(mp.size()>k){
        if(--mp[v[l]]==0){
            mp.erase(v[l]);
        }
            l++;
    }
    if(r-l>mx){
        mx=r-l;
        s=l;
    }
    r++;
}
cout<<s+1<<" "<<s+mx+1;


return;}
///////////////////////////////////////
/*lln(n) lln(k)
vector<ll> v(n);
for(lli(n)){
    cin>>v[i];
}
map<ll,ll> mp;
ll l=0,r=0,s=0,mx=0;
while(r<n){
    mp[v[r]]++;
    if(mp.size()>k){
        --mp[v[l]];
        if(mp[v[l]]==0){
            mp.erase(v[l]);
        }
        l++;
    }
    if(r-l>mx){
        mx=r-l;
        s=l;
    }
    r++;
}
cout<<s+1<<" "<<s+mx+1;*/