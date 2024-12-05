#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define llj(i,x) long long i=0;i<x;++i
#define lli(x) long long i=0;i<x;++i
#define lln(x) long long x; cin>>x;
#define all(x) x.begin(), x.end()
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
typedef long double ld;
#define pf push_front
typedef long long ll;
#define pb push_back
typedef string str;
#define MOD 1e9+7
#define ss second
#define ff first
#define endL "\n"
/* 
g++ dypa.cpp -o lab3.exe

.\a.exe

*/
void sol();
int main() {
IO
ll t;
/* for(cin>>t;t--;) */
sol();
return 0;}



///////////////////////////////////////
ll* frp(ll n){
    ll* p;
    p = new ll[n];
    for(lli(n)){
        p[i]=i+1;
    }
    return p;
}
ll* fn2(ll* ar,ll n){
    for(lli(n)) cout<<ar[i]<<" ";
    return ar;
}
void sol(){
cout<<"f1\n";
ll n=10;
cin>>n;
ll* p=frp(n);
for(lli(n)) 
cout<<p[i]<<endL;
delete[] p;
cout<<p<<"\nf2\n";
ll* u=new ll[n];
for(lli(n)) u[i]=i;
auto u1=fn2(u,n);
cout<<u[3]<<" "<<u1[3];
cout<<"\nf3\n";

cout<<" "<<u<<" "<<u1;
delete[] u1,u;

return;}
///////////////////////////////////////
