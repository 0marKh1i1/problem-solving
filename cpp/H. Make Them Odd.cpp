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
using namespace std;
///////////////////////////////////////
void sol(){

ll n,c=0;
cin>>n;
set<ll,greater<ll>> st;
for(ll i=0;i<n;++i){
    ll temp;
    cin>>temp;
    if(!(temp%2))
        st.insert(temp);
}
while(!st.empty()){
    ll temp=(*st.begin())/2;
    st.erase(st.begin());
    if(!(temp%2))
        st.insert(temp);
    c++;
}
cout<<c<<"\n";
return;}
///////////////////////////////////////
int main() {
IO
ll t=1;
cin>>t;
while (t--)
sol();
return 0;}