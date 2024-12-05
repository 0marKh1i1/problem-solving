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
str s; cin>>s;
ll n = s.size(),c=0;
for(ll i=0;i<n;i++){
    if(s[i]!=s[n-1-i]){
        c++;
    }
}
cout<<((c>1)?"NO":"YES");

return 0;}
