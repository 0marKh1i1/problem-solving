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
ll p,n,m; cin >>p>>n>>m;
ll k,A,count=0;vector<ll> a(p+1);
for (ll i = 0; i < n; i++) {
    cin >> k;
    for (ll j = 0; j < k; j++) {
        cin >> A;
        a[A]++;
    }
}
for (ll i = 1; i <= p; i++) {
    if (a[i] >= n / 2) {
        count++;
    }
}
if (count>=m){cout<<0;}
else cout << m - count;
return 0;}
/*my name is you*/
/*حالة الاسئلة اكثر حط 0*/