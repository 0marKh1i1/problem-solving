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
g++ name.cpp -o name.exe

.\name.exe

*/
void sol();
int main() {
IO
ll t;
for(cin>>t;t--;)
sol();
return 0;}



///////////////////////////////////////
void sol(){
    ll n;
    cin >> n;
    if(n==2){
        cout<<"prime\n"; 
        return;
    }
    if((n>2 and !(n&1))) {
        cout<<"not prime\n"; 
        return;
    }
    ll k= sqrt(n);
    for(ll i=2; i<=k; ++i){
        if(n%i==0){
            cout<<"not prime\n"; 
            return;
        }
    }
    cout<<"prime\n";
return;}
///////////////////////////////////////