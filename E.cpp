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
lln(m)
lln(k)
str a,b; cin>>a>>b;
vector<vector<ll>> v(26,vector<ll>(26,0));
for(lli(n-k+1)){
    v[a[i]-'a'][a[i+k-1]-'a']=1;
}
ll c=0;
for(lli(m)){
    for(ll j=i;j<m;++j){
        c+=v[b[i]-'a'][b[j]-'a'];
    }
}
cout<<c<<endL;
return;}
///////////////////////////////////////