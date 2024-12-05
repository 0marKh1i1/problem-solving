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

ll n;
cin>>n;
deque<ll> d;
ll temp;
cin>>temp;
d.pb(temp);
for(ll i=1;i<n;i++){
cin>>temp;
    if(temp>=d.back()){
        d.pb(temp);
    }else if(temp<=d.front()){
        d.pf(temp);
    }else d.pb(temp);
}
for(const auto &i:d){
    cout<<i<<" ";
}
cout<<endl;
return;}
///////////////////////////////////////
int main() {
IO
ll t=1;
cin>>t;
while (t--)
sol();
return 0;}