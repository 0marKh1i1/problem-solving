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
//cin >> t;
for(;t--;) 
sol();
return 0;}



///////////////////////////////////////
void sol(){
lln(n)
    map<ll,ll> mp;
for(lli(n)) {
    ll temp1,temp2;
    cin>>temp1>>temp2;
    mp[temp2]=temp1;

}
auto it=mp.begin();
ll c1=it->second;
ll c2=it->second-it->first;
it++;
for(it;it!=mp.end();it++){
    c1+=;
}



return;}
///////////////////////////////////////