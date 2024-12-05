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
/* ll t;
for(cin>>t;t--;) */
sol();
return 0;}
///////////////////////////////////////
void sol() {

lln(n)
lln(k)
vector<ll> v(n);
map<ll,ll> mp;
for(lli(n)){
    cin>>v[i];
}

ll l=0,r=0,s=-1,e=-1;
map<ll,ll> m;
while(r<n){
    m[v[r]]++;
    while(m.size()>k){
        if(--m[v[l]]==0){
            m.erase(v[l]);
        }
        l++;
    }
    if(m.size()==k){
    while(l<n and m[v[l]]>1){
        if(--m[v[l]]==0){
            m.erase(v[l]);
        }
        l++;
    }
        s=l;
        e=r;
        break;
    }
    r++;
}
if(s==-1)
cout<<"-1 -1";
else
cout<<s+1<<" "<<e+1;

return;}
///////////////////////////////////////
