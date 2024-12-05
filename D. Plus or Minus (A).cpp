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
/* for(cin>>t;t--;) */
sol();
return 0;}


///////////////////////////////////////
ll n=0,mn=21;
vector<ll> v(21);
void sum(ll value,ll op,ll index){
    if(index==n){
        if(value==0){
            mn=((mn<=op)?mn:op);
        }
        return;
    }
    sum(value + v[index],op,index+1);
    sum(value - v[index],op+1,index+1);
}
void sol(){

cin>>n;
cin>>v[0];
for(ll i =1;i<n;++i){
    char c;
    ll b;
    cin>>c>>b;
    v[i]=((c=='+')?b:-b);
}
/* for(lli(n)) cout<<v[i]<<" "; */
sum(v[0],0,1);
if(mn==21) {cout<<-1; return;}
cout<<mn;

return;}
///////////////////////////////////////



