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
void sol() {
ll n,k;
cin>>n>>k;
vector<ll> a(n);
for (ll i = 0; i < n; i++)
    cin >> a[i];
ll sh = 0,i=0,j=n-1;

while (k > 0 and i <= j) {
if (a[i] == 0) {
    i++;
    continue;
}
a[i]--;
k--;
if (a[i] == 0) {
    sh++;
    i++;
}
if (k > 0 and j > i) {
    if (a[j] == 0) {
        j--;
        continue;
    }
    a[j]--;
    k--;
    if (a[j] == 0) {
        sh++;
        j--;
    }
}
}
 cout<<sh<<"\n";
  


return;}
///////////////////////////////////////