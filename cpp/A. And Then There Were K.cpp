#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
void sol();
int main() {
IO
ll t;
for(cin>>t;t--;)
sol();
return 0;}



////////////////////////////////////////
void sol(){

ll n;
cin>>n;
ll c=n,k=n;
for(ll i=1;i<=n;++i){
    c&=n-i;
    if(!c) {cout<<n-i<<"\n"; break;}

}

return;}
///////////////////////////////////////