#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define llj(i,x) long long i=0;i<x;++i
#define lli(x) long long i=0;i<x;++i
#define lln(x) long long x; cin>>x;
#define all(x) x.begin(), x.end()
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define ld long double
#define pf push_front
#define ll long long
#define pb push_back
#define str string
#define ss second
#define ff first
#define endL "\n"
#define isit 1
void sol();
int main() {
IO
ll t=1;
if(isit)
cin>>t;
while (t--)
sol();
return 0;}
///////////////////////////////////////
void sol(){

lln(n)
vector<ll> v(n);
for(lli(n)){
    cin>>v[i];
}
ll f=1;
for(lli(n-2)){
    if(v[i]<0){
        f=0;
        break;
    }
    ll t=v[i];
    v[i]-=t;
    v[i+2]-=t;
    v[i+1]-= 2*t;
}
ll c= count(all(v),0);
if((c==n) and (f==1)){
    yes
}else no



return;}
///////////////////////////////////////