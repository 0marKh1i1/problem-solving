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
using namespace std;
///////////////////////////////////////
void sol(){

map<str,ll>mp={{"Tetrahedron",4},{"Cube",6},
{"Octahedron",8},{"Dodecahedron",12},{"Icosahedron",20}};
ll n=0,ans=0;
cin>>n;
for(ll i=0;i<n;++i){
    str s;
    cin>>s;
    ans+=mp[s];
}
cout<<ans;
return;}
///////////////////////////////////////
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}