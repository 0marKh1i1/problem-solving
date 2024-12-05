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

ll n;
cin>>n;
vector<ll> v(n);
for(ll i=0;i<n;++i)
cin>>v[i];

set<ll> s;
ll l,r;
for(l=0;l<n;++l)
    for(r=l+1;r<n;r++)
        s.insert(v[r]-v[l]);
    

cout<<s.size()<<"\n";
return;}
///////////////////////////////////////
int main() {
IO
ll t=1;
cin>>t;
while (t--)
sol();
return 0;}