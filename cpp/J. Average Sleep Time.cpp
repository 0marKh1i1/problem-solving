#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define str string
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
using namespace std;

void sol(){
    
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n),a;
    for(auto &i:v){cin>>i;}
    ld first=0;
    for(ll i =0 ; i <k;i++){
        first+=v[i];
    }
    ld avg = first;
    for(ll i = k;i<n;i++){
        first-=v[i-k];
        first+=v[i];
        avg+=first;
    }
    avg/=n-k+1;
    cout<<fixed<<setprecision(10)<<avg;
return;}
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}