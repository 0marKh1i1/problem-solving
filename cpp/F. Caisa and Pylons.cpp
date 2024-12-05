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
#define lli(i,x) long long i=0;i<x;++i
#define lln(x) long long x; cin>>x
using namespace std;
///////////////////////////////////////
void sol(){

lln(n);
vector<ll> v(n+1,0);
ll c=0,d=0;
for(ll i=1;i<=n;++i){
    cin>>v[i];
}
d+=v[1];
for(ll i=1;i<n;++i){
    ll temp = v[i]-v[i+1];
    c+=temp;
    if(c<0){
        d+=abs(c);
        c=0;
    }

}
cout<<d;
return;}
///////////////////////////////////////
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}