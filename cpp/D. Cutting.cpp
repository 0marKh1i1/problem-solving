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
void sol(){
    
lln(n);
lln(b);
vector<ll>v(n),d;
for(lli(n)){
    cin>>v[i];
}
ll c=0,even=0,odd=0;
for(lli(n)){
    if(v[i]%2)
        odd++;
    else 
        even++;
    if(odd==even&&i<n-1){
        d.pb(abs(v[i]-v[i+1]));
    }
}
sort(all(d));
for(lli(d.size())){
    b-=d[i];
    if(b>=0)
    c++;
    else break;
}

cout<<c;

return;}
///////////////////////////////////////
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}