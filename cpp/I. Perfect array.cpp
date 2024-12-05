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
ll n,m,count=0;cin>>n>>m;
vector<ll>a(n);vector<ll>b(m);vector<ll>c;
for (ll i = 0; i < n; i++){cin>>a[i];}
for (ll i = 0; i < m; i++){cin>>b[i];}
//a.resize(n+m);
a.insert(a.end(), b.begin(), b.end());
sort(a.begin(),a.end());
//a.resize(a.back());
/* for (size_t i = 0; i < a.size(); i++)
{
      cout <<a[i];
} */

for (ll i = a[0]; i <= a.back(); i++){
    if (find(a.begin(), a.end(), i) == a.end()){
        count++;
        c.push_back(i);
        
      
    } 
}
cout<<count<<endl;
for (ll i = 0; i < count; i++){
    cout <<c[i]<<" "; 
}
return 0;}
/*my name is you*/
