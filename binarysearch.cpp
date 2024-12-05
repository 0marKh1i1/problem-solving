#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define str string
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define llj(i,x) long long i=0;i<x;++i
#define lli(x) long long i=0;i<x;++i
#define lln(x) long long x; cin>>x
#define all(x) x.begin(), x.end()
#define pb push_back
#define pf push_front
#define ff first
#define ss second
#define endL "\n"
using namespace std;
///////////////////////////////////////
ll bs(ll a,vector<ll> b,ll l,ll r){
    ll m =l + (r-l)/2;
    if(b[m]==a){
        return m;
    }else if(b[m]>a){
        return bs(a,b,l,m-1);
    }else if(b[m]<a){
       return bs(a,b,m+1,r);
    }else return -1;
}
void sol(){
vector<ll> v = {1,2,3,4,5,6,7,8,9};
cout<<"enter a number: ";
lln(n);
ll i = bs(n,v,0,v.size());
cout<<"number is: "<<((i==-1)?"none":to_string(i));

return;}
///////////////////////////////////////
int main() {
/* IO */
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}  