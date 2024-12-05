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

ll n,a=1;
cin>>n;
for(ll i = 1; i<=n; i++){
    a*=i;}
cout<<((a%10>=5)?10-(a%10):a%10)<<endl;

return;}
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}