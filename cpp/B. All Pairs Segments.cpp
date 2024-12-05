#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef long double ld;
#define endL "\n"
void sol();
int main() {
    IO
    ll t;
                       for(cin>>t;t--;)
    sol();
    return 0;
}



////////////////////////////////////////
void sol() {

ll n,q;
cin>>n>>q;
vector<ll> v(n);
for(ll i=0;i<n;i++) cin>>v[i];
for (ll i = 0; i < q; i++){
    ll a,b;
    cin>>a>>b;
    ll ans = 0;
    for (ll j = 0; j < n; j++){
        for (ll k = j+1; k < n; k++){
            if (v[j] >= a && v[k] <= b) ans++;
        }
    }
    cout<<ans<<endL;
}



return;}
/////////////////////////////////////// 
