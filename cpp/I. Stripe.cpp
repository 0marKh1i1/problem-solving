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
    
    ll n,s=0,c=0;
    cin>>n;
    vector<ll> v(n,0),sum(n,0);
    for(ll i = 0;i<n;i++){
        cin>>v[i];
        s+=v[i];
        sum[i]+=s;

    }
    for(ll i=0;i<n-1;i++){
        if(sum[i]==(s-sum[i])) c++;
    }
    cout<<c;

return;}
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}