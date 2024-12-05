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
    
    ll n;
    cin>>n;
    vector<ll> v(n),s(4);
    for(auto &i:v){
        cin>>i;
        s[i-1]++;
        /* switch(i){
            case(1):s[0]++; break;
            case(2):s[1]++; break;
            case(3):s[2]++; break;
            case(4):s[3]++; break;
        } */
    }
    ll ans=s[3]+s[2]+(s[1]/2);
    s[0]-=s[2];
    if (s[1]%2){
        ans++;
        s[0]-=2;
    }
    if(s[0]>0){
        ans+=(s[0]+3)/4;
    }
    cout<<ans;
return;}
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}