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
#define lli(x) long long i=0;i<x;++i
#define lln(x) long long x; cin>>x
using namespace std;
///////////////////////////////////////
int dfsa(ll a,ll b,ll c){
    if(a>1000) return 0;
    if(a%c==0&&c!=0) return 1;
    if(dfsa(a,b,c * 10 + 4)) return 1;
    if(dfsa(a,b,c * 10 + 7)) return 1;
    return 0;
}
void sol(){
ll f=0,x=0;
lln(n);

cout<<((dfsa(n,f,x))?"YES":"NO");

return;}
///////////////////////////////////////
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}