#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define str string
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define pb push_back
#define pf push_front
#define ff first
#define ss second
using namespace std;
///////////////////////////////////////
void sol(){

ll n,x0,y0;
cin>>n>>x0>>y0;
vector<pair<ll,ll>> vip(n);
set<pair<ll,ll>> st;
for( ll i=0; i<n;i++){
    cin>>vip[i].ff>>vip[i].ss;
    ll dx=vip[i].ff-x0,dy=vip[i].ss-y0;
    ll gcd=__gcd(dx,dy);
    st.insert({dx/gcd,dy/gcd});
}
cout<<st.size();
/* cout<<__gcd(0,2); */
return;}
///////////////////////////////////////
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}