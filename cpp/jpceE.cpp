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
    ll n,b;
    cin >> n;
    vector<ll> f(n);
    //f.resize(n);
    for(ll i =0;i<n;i++) {
        cin >> f[i];
    }
    sort(f.begin(),f.end(),greater<ll>());
    while((f[1]>0 && f[0]>0)) {
         f[0]--;
         f[1]--;
         sort(f.begin(),f.end(),greater<ll>());
         /* for(ll i =0;i<n;i++) {
            cout << f[i]<<' ';
         
    }
    cout <<endl; */
    }
   // sort(f.begin(),f.end(),greater<ll>());
    cout <<f[0];

return 0;}
