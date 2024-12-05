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
g++ Squars.cpp -o Squars.exe
Squars.cpp
.\Squars.exe

*/
void sol();
int main() {
IO
ll t;
for(cin>>t;t--;)
sol();
return 0;}

// 1 2 1 2   3  1  2  3   1   2  3    1
// 2 4 8 16 20 32 64 80 128 256 320 512
///////////////////////////////////////
void sol(){

lln(n);
ll c1=0,c2=0,c3=0;
ll t1=0,t2=0,t3=0;
for(ll i=1;i<=n/4;i++){
    if(i% ll(20*pow(4,t3))==0){
        t3++;
        c3++;
        
    }
    
    else if(i% ll(4*pow(4,t2))==0){
        t2++;
        c2++;
        
    }
    else if(i% ll(2*pow(4,t1))==0){
        t1++;
        c1++;
        
    }
}
ll c=c1+c2+c3;
cout << c <<endL;

return;}
///////////////////////////////////////
/* for(ll i=4;i<=n;i*=2) c++;
if(n>=2)
cout<<c<<endL;
else cout<<0<<endL; */
/* for(ll i=1;i<=n;++i){
    c+=ll(n/(2*sqrt(5)));
} */
/* ll c=0;
if(n>=2) c++;
if(n>=8) c++;

ll log4n= log2(n)/log2(4);
c+=log4n;

if(n>=2)
cout << c << endL;
else cout<<0<<endL; */
/* if(n>=4) c++;
if(n>=8) c++; */
/* for(ll i=10;i<=n;++i){
    if(i%4==0) c++;
} */
/* ld log4n= log2(n)/log2(4); */
/* if(n==2) {cout<<1<<endL; return;} */
/* ll c=1;
if(n>=16)
for(ll i=4;i<=n;i=i*4){
    c++;
}
if(n>=2)
cout << c << endL;
else cout<<0<<endL; */