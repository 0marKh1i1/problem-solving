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
return 0;}
///////////////////////////////////////
void sol() {

lln(n) lln(m)
vector<ll> v(n),a(m),s(n);
for(lli(n)){
    cin>>v[i];
}
for(lli(m)){
    cin>>a[i];
}
sort(all(v));
sort(all(a),greater<ll>());

ll l=0,ra=m-1,rv=n-1,dl=0,dr=0,m1=0;
for(lli(n)){
    dl=abs(v[l]-a[l]);
    dr=abs(v[rv]-a[ra]);
    if(dl>=dr){
        m1+=dl;
        l++;
    }else{
        m1+=dr;
        rv--;   
        ra--;   
    }
}

cout<<m1<<endL;
return;}
///////////////////////////////////////
