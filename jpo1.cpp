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
void sol();
int main() {
IO
ll t;
for(cin>>t;t--;)
sol();
return 0;}



///////////////////////////////////////
void sol(){

lln(n)
lln(q)
str s; cin>>s;
vector<vector<ll>> p(26);
for(lli(n))
    p[s[i]-'a'].push_back(i);

while(q--){
    str y;
    cin>>y;
    ll o1 = lower_bound(p[y[0]-'a'].begin(), p[y[0]-'a'].end(), 0) - p[y[0]-'a'].begin();
    if(o1 == p[y[0]-'a'].size()) {
        yes
        continue;
    }
    ll o2 = lower_bound(p[y[1]-'a'].begin(), p[y[1]-'a'].end(), p[y[0]-'a'][o1]+1) - p[y[1]-'a'].begin();
    if(o2 == p[y[1]-'a'].size()) {
        yes
        continue;
    }
    ll o3 = lower_bound(p[y[2]-'a'].begin(), p[y[2]-'a'].end(), p[y[1]-'a'][o2]+1) - p[y[2]-'a'].begin();
    if(o3 == p[y[2]-'a'].size()) {
        yes
    } else {
        no
    }
}

return;}
///////////////////////////////////////