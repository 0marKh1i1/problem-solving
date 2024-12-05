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
ll t;
for(cin>>t;t--;)
sol();
return 0;}



///////////////////////////////////////
void sol(){

lln(n)
lln(q)
str s; cin>>s;
while(q--){
    str y;
    cin>>y;
    ll c1=-1,c2=-1,c3=-1;
    for(lli(n)){
        if(s[i]==y[0]) {c1=i;
        break;
        }
    }
    for(ll j=c1+1;j<n;++j){
        if(s[j]==y[1]) {c2=j;
        break;
        }
    }
    for(ll h=c2+1;h<n;++h){
        if(s[h]==y[2]) {c3=h;
        break;
        }
    }
    if((c3>c2 and c1>=0 and c2>c1)){
        no
    }else yes


}



return;}
///////////////////////////////////////