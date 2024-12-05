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
#define MOD 1e9+7
#define ss second
#define ff first
#define endL "\n"
void sol();
int main() {
IO
ll t=1;
for(cin >> t;t--;) 
sol();
return 0;}



///////////////////////////////////////
void sol(){
lln(n)
   vector<pair<ll,ll>> mp(n);
for(lli(n)) {
    ll temp1,temp2;
    cin>>mp[i].second>>mp[i].first;
    

}

sort(all(mp));
auto it=mp.begin();
ll c1=mp[0].ss;
ll c2=mp[0].ss-mp[0].ff;
for(ll i=1;i<n;++i){
    c1+=mp[i].ss-c2;
    c2+=mp[i].ss-c2;
    c2-=mp[i].ff;
}
cout<<c1;


return;}
///////////////////////////////////////