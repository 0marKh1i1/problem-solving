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
 long long n,min1=0,max1=0,d;
    cin >> n;

    long long a[n], b[n];
    for (long long i = 0; i < n; ++i)
        cin >> a[i];

    for (long long i = 0; i < n; ++i)
        cin >> b[i];

;

    for (long long i = 0; i < n; ++i) {
         d = b[i] - a[i];
        min1+= max(0LL, d);
        max1 = max(max1, d);
    }

    long long result = min1 - max1;
    cout << result << endl;

return 0;}
