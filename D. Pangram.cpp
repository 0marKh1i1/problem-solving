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
    ll n;
    cin >> n;
    vector <ll> v(n),a;
    set <ll> s;
    for(auto &i:v){
        cin>>i;
    }
    for(ll i = n-1;i>=0;i--){
        if(s.find(v[i])==s.end()){
            s.insert(v[i]);
            a.pb(v[i]);
        }
    }
    reverse(a.begin(),a.end());
    cout<<a.size()<<endl;
    for(const auto &i:a) cout<<i<<" ";
    return;
}
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}