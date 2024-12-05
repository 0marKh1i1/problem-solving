#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
#define endL "\n"
void sol();
int main() {
IO
ll t;
for(cin>>t;t--;)
sol();
return 0;}



////////////////////////////////////////
ll fn(ll a,ll b){
    ll ans=1;
    for(ll i=0;i<b;++i){
        ans= (ans*a) % ll(1e9+7) ;
    }
    return ans;
}
void sol(){

ll n,k;
cin>>n>>k;
//cout<<(ll(pow(n,k)))%ll(1e9+7)<<endL;
cout<<fn(n,k)<<endL;

return;}
///////////////////////////////////////