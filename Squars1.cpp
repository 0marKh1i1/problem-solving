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

*//* 
map<ll,ll> mp; */
vector<ll> mp(1e4+10,0);
void sol();
void mpa();
int main() {
IO
mpa();
ll t;
for(cin>>t;t--;)
sol();
return 0;}

// 1 2 1 2   3  1  2  3   1   2  3    1
// 2 4 8 16 20 32 64 80 128 256 320 512
///////////////////////////////////////

void mpa(){
ll c1=0,c2=0,c3=0;
ll t1=0,t2=0,t3=0;
mp[0]=0;
for(ll i=1;i<=1e4;i++){
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
ll c=c1+c2+c3;
mp[i]=c;
/* cout<<"c= "<<c<<" mp[i]= "<<mp[i]<<endL; */
}

}
void sol(){

lln(n);
/* if(n>0) n--; */
cout << mp[n] <<endL;

return;}
///////////////////////////////////////
