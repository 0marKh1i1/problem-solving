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
vector<ll> v(1e4+10, 0);
void sol();
int main() {
v[0] = 0;
v[1] = 0;
for(ll i = 2; i <= 1e4; i++){
    if(i % 4 == 0)
        v[i] = v[i-4] + 1;
    else
        v[i] = v[i-1];
}
ll t;
for(cin>>t;t--;)
    sol();
return 0;}

// 1 2 1 2   3  1  2  3   1   2  3    1
// 2 4 8 16 20 32 64 80 128 256 320 512
///////////////////////////////////////
void sol(){
lln(n)


cout << v[n] << endL;
return;}
///////////////////////////////////////
