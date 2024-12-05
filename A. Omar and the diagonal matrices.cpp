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
ll c=0,sum=0,c11=0,c12=0,c21=0,c22=0,c31=0,c32=0,c41=0,c42=0;
for(lli(n)){
    for(llj(j,m)){
        cin>>a[i][j];
        sum+=a[i][j];
        if(i==j) c+=a[i][j];
    }
}

if(n==m){
    if(c==sum) yes
    else no
}else if(n==2*m){
    for(lli(n/2)){
        for(llj(j,m)){
            c11+=a[i][j];
            if(i==j) c12+=a[i][j];
        }
    }
    for(ll i=n/2;i<n;++i){
        for(llj(j,m)){
            c21+=a[i][j];
            if(i==j+n/2) c22+=a[i][j];
        }
    }
    if((c11==c12) and (c21==c22)) yes
    else no
}else if(2*n==m){
    for(lli(n)){
        for (llj(j,m/2)){
            c31+=a[i][j];
            if(i==j) c32+=a[i][j];
        }
    }
    for(lli(n)){
        for(ll j=m/2;j<m;++j){
            c41+=a[i][j];
            if(i+m/2==j) c42+=a[i][j];
        }
    }if((c31==c32) and (c41==c42)) yes
    else no
}else no

return;}
///////////////////////////////////////