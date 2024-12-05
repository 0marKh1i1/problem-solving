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

void sol(){
    
    ll n,d;
    cin>>n>>d;
    vector<pair<ll,ll>> pa(n);
    for(auto &i:pa){
        cin>>i.ff>>i.ss;
    }
    sort(pa.begin(),pa.end());
    ll mx=0,now=0,l=0,r=0;
    for(l=0,r=0;r<n;++r){
        now+=pa[r].ss;
        while(pa[r].ff-pa[l].ff>=d){
            now-=pa[l++].ss;
        }
        mx=(mx>=now)?mx:now;
    }
    cout<<mx;
return;}
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}