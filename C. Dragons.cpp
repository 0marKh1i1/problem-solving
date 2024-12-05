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
bool comp(const pair<ll,ll> &a,const pair<ll,ll> &b){
    return a.ff<b.ff;
}
void sol(){
    
lln(s);
lln(n);

vector<pair<ll,ll>> vip(n);
for(lli(n)){
    cin>>vip[i].ff>>vip[i].ss;
}
sort(all(vip),comp);
for(lli(n)){
    if(s>vip[i].ff){
        s+=vip[i].ss;
    }else {
        s=0;
        break;
    }
}
cout<<((s)?"YES":"NO");
return;}
///////////////////////////////////////
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}