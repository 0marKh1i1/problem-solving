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
ll l=0;
void sol();
int main() {
IO
ll t;
for(cin>>t;t--;)
sol();
return 0;};
///////////////////////////////////////
void sol(){

lln(n)
vector<ll> v(n);
for (lli(n))
    cin >> v[i];
sort(all(v));
cout<<2*(v[n-1]-v[0])+2*(v[n-2]-v[1])<<endL;

return;}
///////////////////////////////////////
