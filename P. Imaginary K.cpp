#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <numeric>
#include <algorithm>
#include <cassert>
#include <climits>
#include <numeric>
#include <cctype>
#define ll long long
#define str string
using namespace std;


int main(){
ll n,k,c1=0;cin>>n>>k;
vector<ll> a(n);
vector<long long> c(k + 1, 0);
for (ll i = 0; i < n; i++){cin >>a[i];}

for (ll i = 0; i < n-1; i++){
 for (ll j = i+1; j < n; j++){
    ll m=a[i]+a[j];
    if (m<=k){c[m]++;}   
}   
}
for (long long q = 1; q <= k; ++q) {cout << c[q] << " ";}


return 0;}
