#include <algorithm>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <numeric>
#include <cassert>
#include <climits>
#include <numeric>
#include <cctype>
#include <vector>
#include <string>
#include <cmath>
#define ll long long
#define str string
using namespace std;


int main(){
ll n,k,m,c=0; cin >>n>>k;
vector<ll> a(n);
for (ll i = 0; i < n; i++){cin>>a[i];}
for (m = 2; m < k; m++){
    for (ll i = 0; i < n-1; i++){
        for (ll j = i+1; j < n; j++){
            if(a[i]%m==a[j]%m){
                c++;
            }
        } 
    }
}
cout<<((c)?"YES":"NO");




return 0;}
