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
void sol(){

    lln(n)
    lln(m)
    /* vector<vector<ll>> v(n,vector<ll> (m)); */
    ll v[n][m];
    ll l =0,r=0;
    for(lli(n)){
        for(llj(j,m)){
            cin>>v[i][j];
            
        }
    }
    for(ll i=0;i<m;i++){
      if(r>=n){
        l=1; 
      }else if(r<=0){
        l=0;
      }
      if(i==r){ 
        if(v[r][i]==0){
            no return;
        }
      }  
      if(l){
        r--;
      }else{
        r++;
      }
    }
yes
return;}
///////////////////////////////////////