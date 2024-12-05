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

ll n,c=0,ans=0;
cin>>n;
vector<ll> a(n);
for(auto &x:a)cin>>x;
priority_queue<ll,vector<ll>,greater<>> pq;

for(ll i=1;i<n;++i){
    if(a[i]<a[i-1]){
        pq.push(a[i-1]-a[i]);
        a[i]=a[i-1];
    }
}
/* while (!pq.empty()){
    cout<<pq.top()<<' ';
    pq.pop();
}
 */
while (!pq.empty()){
    ll top = pq.top();
    top-=c;
    if(top<=0){
        pq.pop();
        continue;
    }
    ans+=(pq.size()+1)*top;
    c+=top;
}
cout<<ans<<endL;


return;}
///////////////////////////////////////