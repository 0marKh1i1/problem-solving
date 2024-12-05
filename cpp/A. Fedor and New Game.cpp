#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
void sol();
int main() {
IO
ll t;
//for(cin>>t;t--;)
sol();
return 0;}



///////////////////////////////////////
ll po(ll a){
	ll c=0;
	for(ll i=0;i<64;++i){
		//ll b=a&1;
		if(a&1) c++;
		a>>=1;
	}
	return c;
}
void sol(){

ll n,m,k,c=0;
cin>>n>>m>>k;
ll a[m+1];
for(ll&i:a) cin>>i;
for(ll i=0;i<m;++i){
	ll d=po(a[m]^a[i]);
	if(d<=k) c++;
}
cout<<c;
return;}
///////////////////////////////////////