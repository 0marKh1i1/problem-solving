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
ll n,m,temp,max1=0; cin >> n>>m;
const ll N=n,M=m;
ll a[N][M];
for(ll i = 0 ; i<N ; i++) {
for(ll j = 0 ; j<m ; j++) {
    cin >> a[i][j];
}}
for(ll i = 0 ; i<N-1 ; i++) {
for(ll j = 0 ; j<m-1 ; j++) {
    temp = a[i][j]+a[i][j+1]+a[i+1][j+1]+a[i+1][j];
    max1 = max(max1,temp);
}}
cout <<max1;
return 0;}
/*my name is you*/
