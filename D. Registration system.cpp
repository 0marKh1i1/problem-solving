#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define str string
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define lli(i,x) long long i=0;i<x;++i
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
map<str,ll> mp;
for(lli(i,n)){
    str s;
    cin>>s;
    if(mp.find(s)!=mp.end()){
        cout<<s<<mp[s]<<"\n"; 
        mp[s]++;
    }else{
        mp[s]++;
        cout<<"OK"<<"\n"; 
    }
}

return;}
///////////////////////////////////////
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}  