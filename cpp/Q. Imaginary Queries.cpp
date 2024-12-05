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
    ll n,q,num,l,r,x,y,sum; cin>>n>>q;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++){cin>>a[i];}
    while (q--){
        cin>>num;
        switch(num){
            case 1: cin>>l>>r;  sum = (accumulate(a[0], a[l], 0)) + (accumulate(a[r], a[n-1], 0));  cout<<sum;
            break;
            case 2: 
            break;
            case 3: 
            break;
            case 4: 
            break;
            case 5: 
            break;
        }
    }
    
    


return 0;}
