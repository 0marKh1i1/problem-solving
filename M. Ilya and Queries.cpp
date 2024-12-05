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

str s; 
ll m,l,r,sum=0;
cin>>s>>m;
vector<ll> v(s.size()),p(s.size());
for(ll i=0;i<s.size()-1;++i){
    v[i]=(s[i]==s[i+1])?1:0;
    p[i+1]=p[i]+v[i];
}
while (m--)
{
    cin>>l>>r;
    l--;r--;
     cout<<p[r]-(l>0?p[l]:0)<<"\n";

}


return;}
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}