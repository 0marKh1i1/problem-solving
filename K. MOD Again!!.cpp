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
ll n,x,temp,max1=0; cin>>n>>x;
vector<ll>a(n);
for (ll i = 0; i < n; i++){
    cin >> a[i];    
}
for (ll i = 0; i < n-3; i++){
    for (ll j = i+1; j < n-2; j++){
        for (ll k = j+1; k < n-1; k++){
            for (ll h = k+1; h < n-0; h++){
                temp=(a[i]*a[j]*a[k]*a[h])%x;
                max1 = max(max1,temp);


}
}
}
}
cout <<max1;


return 0;}
/*my name is you*/
