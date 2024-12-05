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
ll f=0;
ll n;
void dfs(ll a){
    if(a>1000) return;
    if(a!=0&&n%a==0) f=1;
    dfs(a * 10 + 4);
    dfs(a * 10 + 7);
}
void sol(){

cin>>n;
dfs(0);
cout<<((f)?"YES":"NO");

return;}
///////////////////////////////////////
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}