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
const int MOD = 1e9 + 7;
void sol();
int main() {
IO
/* ll t;
for(cin>>t;t--;) */
sol();
return 0;}



///////////////////////////////////////
vector<str> v;
map<ll,ll> mp;
ll re(str r,ll si){
    if(r[si]=='?'){
        str q=r,w=r;
        q[si]='+';
        w[si]='-';
       re(q,si+1);
       re(w,si+1);
    }else{
        ll i=0;
        for(i=si;i<r.size();++i){
            if(r[i]=='?'){
                re(r,i);
                break;
            }
        }
        if (i==r.size()){
            v.pb(r);
        }
    }
}

void sol(){

str s,a;
cin>>s>>a;
ll c=0,b=0;
for(lli(s.size()))
    c=((s[i]=='+')?c+1:c-1);
ll o;
for(o =0;o<a.size();++o){
    if(a[o]=='?'){
        re(a,o);
        break;
    }
}
if(o!=a.size()){
/* cout<<"ans\n";
for(lli(v.size())){
    cout<<v[i]<<endL;
} */
ll c1=0;
for(lli(v.size())){
    c1=0;
    for(llj(j,v[i].size())){
         c1=((v[i][j]=='+')?c1+1:c1-1);
    }
    mp[c1]++;
}
ld nas=mp[c]*1.0/v.size();
cout<<fixed<<setprecision(9)<<nas<<endL;}
else{
    ll c2=0;
    for(lli(a.size()))
        c2=((a[i]=='+')?c2+1:c2-1);
    cout<<((c2==c)?"1.000000000000":"0.000000000000")<<endL;
}
return;}
///////////////////////////////////////