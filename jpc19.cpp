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
#define m 1000000007
#define ll long long
#define pb push_back
#define str string
#define n 1000001
#define ss second
#define ff first
#define endL "\n"
void sol();
void q();
ll idk(ll c, ll d);
int main() {
IO
q();
ll t;
for(cin >> t;t--;) sol();
return 0;
}



///////////////////////////////////////
array<ll,n> ar,ar1;

ll idk(ll y,ll x) {
ll r=1;
while(x) {
if(x % 2){r *= y; r %= m;}
y *= y; y %= m;
x /= 2;
}
return r;}
void q() {
ar[0] = ar1[0] = 1;
for(ll i=1;i<n;i++) {
ar[i]=(ar[i-1]*i)%m;
ar1[i]=idk(ar[i],m-2);
}
}

void sol(){
string s; cin>>s;
vector<ll> aph(26);
for(char i:s)aph[i-'a']++;
ll nas=0;
for(lli(26)) if(aph[i]&1) nas++;
if(nas>1){
    cout<<"0\n";
    return;
}
ll ans=ar[s.size()/2];
for(lli(26)) ans = (ans * ar1[aph[i] / 2]) % m;
cout<<ans<<endL;
return;}

///////////////////////////////////////