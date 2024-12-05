#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
#define endL "\n"
void sol();
int main() {
IO
ll t;
for(cin>>t;t--;)
sol();
return 0;}



////////////////////////////////////////
void sol(){

    bool f=0;
    ll n,x,k1(0),k2(0),k3(0);
    
    cin>>n>>x;
    vector<ll> a(n),b(n),c(n);
    
    if(0==x) f=1;
/////////////////////////////////////
    for(ll i=0;i<n;++i){
        cin>>a[i];
    }
    for(ll i=0;i<n;++i){
        cin>>b[i];
    }
    for(ll i=0;i<n;++i){
        cin>>c[i];
    }
///////////////////////////
	for(ll i=0;i<n and !f;i++){
		if(k1==x) {
			f=1;
			break;
		}
		if(((a[i]|x) == x ) and( a[i] <=x) ){
			k1|=a[i];
			if(k1==x) {
				f=1;
				break;
			}
		}else break;
		
	}
	for(ll i=0;i<n and !f;i++){
		if(k2==x||k1==x) {
			f=1;
			break;
		}
		if(((b[i]|x) == x ) and( b[i] <=x) ){
			k2|=b[i];
			k1|=b[i];
			if(k2==x||k1==x) {
			f=1;
			break;
		    }
		}else break;
		
	}
   for(ll i=0;i<n and !f;i++){
		if(k2==x||k1==x||k3==x) {
			f=1;
			break;
		}
		if(((c[i]|x) == x ) and (c[i] <= x) ){
			k2|=c[i];
			k1|=c[i];
			k3|=c[i];
			if(k2==x||k1==x||k3==x) {
			f=1;
			break;
		    }
		}else break;
		
	}

    cout<<((f)?"YES":"NO")<<endL;

return;}
///////////////////////////////////////