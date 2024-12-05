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

ll n,m;
cin>>n>>m;
vector<ll> v(m);
priority_queue<ll> mx;
priority_queue<ll,vector<ll>,greater<ll>> mn;
for(auto &i:v){
    cin>>i;
    mx.push(i);
    mn.push(i);
}
ll mxz=0,mnz=0;
for(ll i=0;i<n;++i){
    ll  mxs=mx.top();
    mx.pop();
    mxz+=mxs;
    if(mxs>1){
        mx.push(mxs-1);
    }
    ll  mns=mn.top();
    mn.pop();
    mnz+=mns;
    if(mns>1){
        mn.push(mns-1);
    }
}
cout<<mxz<<" "<<mnz;
return;}
///////////////////////////////////////
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}