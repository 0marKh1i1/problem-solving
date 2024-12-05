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

ll k;cin>>k;
ll n;cin>>n;

priority_queue<ll> q;
ll c=0;
for(ll i=0;i<n;i++){
    ll x;cin>>x;
    q.push(x);
}

if(q.size()) q.pop();

while(q.size()){
    c+= (q.top()*2)-1;
    q.pop();
}

cout<<c<<"\n";
return;}
///////////////////////////////////////