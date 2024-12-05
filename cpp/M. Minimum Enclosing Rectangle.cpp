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
ll n ;cin>>n;
ld maxx=LLONG_MIN,maxy=LLONG_MIN,minx=LLONG_MAX,miny=LLONG_MAX;
vector<ld> x(n);vector<ld> y(n);
for (ll i = 0; i < n; i++){cin >> x[i]>>y[i];}
//for (ll i = 0; i < n; i++){cin >> y[i];}
for (ll i = 0; i < n; i++){
    maxx=max(maxx,x[i]);
    maxy=max(maxy,y[i]);
    minx=min(minx,x[i]);
    miny=min(miny,y[i]);
}
/* cout <<maxx<<" "<<minx<<" "<<maxy<<" "<<miny<<endl; */
cout << fixed << setprecision(6) << (maxx - minx) * (maxy - miny);
return 0;}
/*my name is you*/
