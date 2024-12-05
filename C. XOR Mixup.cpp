#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
void sol();
int main() {
IO
ll t;
for(cin>>t;t--;)
sol();
return 0;}



////////////////////////////////////////
void sol(){

ll n,f=0;
cin>>n;
vector<ll> v(n);
for(auto &i:v) {
    cin>>i;
}/* 
sort(v.begin(),v.end(),greater<ll>()); */
ll ans=v[0];
/* for(ll i=31;i>=0;--i){
    if(v[0]&(1<<i)){
        f=i; 
        break;       
    }
} */

/* for(ll i=1;i<n;++i){
    if (!(v[i]&(1<<f))){
        ans=v[i];
        break;
    }
} */

cout<<ans<<endl;
return;}
///////////////////////////////////////