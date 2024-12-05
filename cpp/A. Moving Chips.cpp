#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define str string
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define llj(i,x) long long i=0;i<x;++i
#define lli(x) long long i=0;i<x;++i
#define lln(x) long long x; cin>>x
#define all(x) x.begin(), x.end()
#define pb push_back
#define pf push_front
#define ff first
#define ss second
#define endL "\n"
using namespace std;
///////////////////////////////////////
void sol(){

lln(n);
ll f=0,c=0,t=0;;
vector<ll> v(n);
for(lli(n)){
    cin>>v[i];
    if(v[i]==1){
        f=1;
        c+=t;
        t=0;
    }else if(f&&v[i]==0){
        t++;
    }
}
cout<<c<<endL;
return;}
///////////////////////////////////////
int main() {
IO
ll t=1;
cin>>t;
while (t--)
sol();
return 0;}  