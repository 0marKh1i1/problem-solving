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
void sol();
int main() {
IO
ll t;
for(cin>>t;t--;)
sol();
return 0;}



///////////////////////////////////////
void sol(){

lln(n)
lln(k)
vector<ll> v(n),b(n+1);
ll sum=0,mx=0;
for(lli(n)){
    cin>>v[i];
}
sort(all(v));
for(lli(n)){
    sum+=v[i];
    b[i+1]=sum;
}
for(lli(k+1)){
    mx=max(mx,b[n-i]-b[2*(k-i)]);
}
cout<<mx<<endL;

return;}
///////////////////////////////////////