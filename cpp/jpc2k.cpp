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
ll n,size=0; cin >>n;
vector<ll> a(n);
for (ll i = 0; i < n; i++){cin >> a[i];}
sort(a.begin(), a.end());
size = abs(a[0]-a[1])+abs(a[1]-a[2]);
cout <<size;
return 0;}

