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


// a[i]=0
////////////////////////////////////////
void sol(){

ll n; cin>>n;
vector<ll> a(n); for(auto &i:a) cin>>i;
for(ll i=0;i<n;++i){
    ll c=a[i],k=0;
    a[i]=0;
    for(ll j=0;j<n-1;++j){
        //if(j!=i&&j!=i-1){
            k=a[j]^a[j+1];
        //}
    }
    a[i]=c;
    if(k==c){cout<<k<<"endl\n"; break;}
}

return;}
///////////////////////////////////////