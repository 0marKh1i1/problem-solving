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
#define isit 1
void sol();
int main() {
IO
ll t=1;
if(isit)
cin>>t;
while (t--)
sol();
return 0;}
///////////////////////////////////////
void sol(){

lln(n);
/* vector<ll> s={0,1},c={0,1}; */
set<ll> st;


for(ll i=1;i*i<=n;++i){
    st.insert(i*i);
    
}
for(ll i=1;i*i*i<=n;++i){
     st.insert(i*i*i);
    
}
cout<<st.size()<<endl;
return;}
