3#include <iostream>
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
   ll n,c=0,mx=LLONG_MAX; cin >>n;
   vector<ll> a(n);
   for (auto &g : a){cin >> g;}
   //for (auto &i : a){cout << i;}
   for (ll i = 0; i < n; i++){
        c=0;
        a[i]=((a[i]==1)?0:1);
        for (ll j = i; j < n-1; j++){
            if (a[j]>a[j+1]) c++;
        }
        cout <<c<<endl;
        mx = min(mx,c);
        a[i]=((a[i]==1)?0:1);
   }
   //cout <<mx;







return 0;}
