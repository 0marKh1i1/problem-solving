#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <numeric>
#include<algorithm>
#include<cassert>
#include <climits>
#define ll long long
using namespace std;


int main(){
    ll n,k,c,m,man=100000000000,a,tot;
    cin >> n>>k>>c;
    //const ll N =n;
    /* ll a[N]; */
    for(ll i=0;i<n;i++){
       //if (i>=1) {m = a;}
        cin>>a;
        //if (i==0){m = a;}
            man = ((man<=a)?man:a);
        
    }
    /* cout << man; */
    tot = man + k - c;
    cout << ((tot<k)?tot:k);
    
    
    
    
    
    
    
    
    
    
return 0;}