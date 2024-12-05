#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define str string
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
using namespace std;
///////////////////////////////////////
void sol(){

ll n;
cin>>n;
priority_queue<pair<ll,ll>> pq;
for(ll i=1 ;i<=n;++i){
    ll a; cin>>a;
    if(a>0)
    pq.push({a,i});
}
vector<pair<ll,ll>> ans;
while(pq.size()>1){
    pair<ll,ll> p1=pq.top(); pq.pop();
    pair<ll,ll> p2=pq.top(); pq.pop();
    ans.push_back({p1.ss,p2.ss});
    if(p1.ff>=2){
        pq.push({p1.ff-1,p1.ss});
    }
    if(p2.ff>=2){
        pq.push({p2.ff-1,p2.ss});
    }
}
cout<<ans.size()<<endl;
for(auto &i:ans){
    cout<<i.ff<<" "<<i.ss<<endl;
}


return;}
///////////////////////////////////////
int main() {
IO
ll t=1;
cin>>t;
while (t--)
sol();
return 0;}