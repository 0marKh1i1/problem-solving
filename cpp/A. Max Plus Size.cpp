#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef long double ld;
#define endL "\n"
void sol();
int main() {
    IO
    ll t;
                       for(cin>>t;t--;)
    sol();
    return 0;
}



////////////////////////////////////////
void sol() {

ll n,m=0;
bool t=0;
cin>>n;
vector<ll> a(n);
for(ll i=0;i<n;i++) {
    cin>>a[i]; 
    if(a[i] >= m and !(i & 1)) t=1;
    else if(a[i] > m ) t=0;
    
    if(a[i] > m) {m=a[i];}
}
cout<<(m+(t?(n+1)/2:n/2))<<endL;

return;}
/////////////////////////////////////// 
