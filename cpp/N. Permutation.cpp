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
#define ld long double
#define str string
using namespace std;
int main(){
ll n,f=1; ;cin>>n;
vector<ll> a(n);
for (ll i = 0; i < n; i++){cin >> a[i];}
sort(a.begin(),a.end());
for (ll i = 0; i < n; i++){if (i+1!=a[i]){f=0; break;}}
cout << ((f)?"Yes":"No");
return 0;}
/*my name is you*/
