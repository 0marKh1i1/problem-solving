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



///////////////////////////////////////

void sol(){
ll n; cin>>n;
for(ll i=n-1;i>=0;--i){
     if((n & i)==0){ cout<<i<<endl; return;}
}

return;}
///////////////////////////////////////