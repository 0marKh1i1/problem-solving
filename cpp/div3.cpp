#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
#define endL "\n"
/* 
g++ div3.cpp -o div3.exe
.\div3.exe
*/
void sol();
int main() {
IO
ll t;
for(cin>>t;t--;)
sol();
return 0;}


////////////////////////////////////////
/* void sol(){


ll n,k;
cin>>n>>k;
vector<ll> a(n);
deque<ll> d;
//for(auto &i:a) cin>>i;
ll temp;
for(ll i=0;i<n;++i){
    cin>>temp;
    d.push_back(temp);
}
for(ll i=0;i<k;++i){
    if(d.front  d.back >= k){cout<<}

}


return;} */
///////////////////////////////////////
void sol() {
    ll n, k,z=0,m=0;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &i : a) cin >> i;
    ll l = 0, r = n - 1;
    while (k > 0 && l <= r) {
        if (a[l] > k && a[r] > k) {
            break;
        }
        /* if((a[l]+1)/2 + (a[r])/2>k){
            break;
        } */
        if (z++ % 2 == 0) {
            a[l]--;
            if (a[l] == 0) {l++;}
        } else {
            a[r]--;
            if (a[r] == 0) {r--;}
        }
        k--;
    }
    cout << l+ (n-1-r) << endL;
}