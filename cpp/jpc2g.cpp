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
ll n; cin >>n;
vector<ll> a(n);
for (ll i = 0; i < n; i++){cin >> a[i];}
reverse(a.begin(), a.end());
 for (ll i = 0; i < n; ++i)
        cout << a[i] << " ";

return 0;}

