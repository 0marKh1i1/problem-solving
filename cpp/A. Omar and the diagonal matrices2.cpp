/*

when i wrote this code only i and allah know what it does
now only allah knows

*/

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
/* ll t;
for(cin>>t;t--;) */
sol();
return 0;}



///////////////////////////////////////
void sol() {
  
lln(n)
lln(m)
vector<vector<ll>> a(n,vector<ll>(m));
ll f=1,c1=1,c2=1,c3=1,c4=1;
for(lli(n)){
    for(llj(j,m)){
        cin>>a[i][j];
        if((i!=j) and a[i][j] != 0) f=0;
    }
}

if(n==m){
    if(f) yes
    else no
}else if(n==2*m){
    for(lli(n/2)){
        for(llj(j,m)){
            if((i!=j) and a[i][j] != 0) c1=0;
        }
    }
    for(ll i=n/2;i<n;++i){
        for(llj(j,m)){
            if((i!=j+n/2) and a[i][j] != 0) c2=0;
        }
    }
    if((c1) and (c2)) yes
    else no
}else if(2*n==m){
    for(lli(n)){
        for (llj(j,m/2)){
            if((i!=j) and a[i][j] != 0) c3=0;
        }
    }
    for(lli(n)){
        for(ll j=m/2;j<m;++j){
            if((i+m/2!=j) and a[i][j] != 0) c4=0;
        }
    }if((c3) and (c4)) yes
    else no
}else no

return;}
///////////////////////////////////////