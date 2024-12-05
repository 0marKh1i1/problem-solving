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
#define str string
using namespace std;


int main(){
int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int mz = 0, cz = 0;
        while(n) {
            if(n & 1) {
                mz = max(mz, cz);
                cz = 0;
            } else {
                cz++;
            }
            n >>= 1;
        }
        cout << max(mz, cz) << endl;
    }
return 0;}

/* c = 0;
    for (ll k = 1;k<sizeof(s)-1;k+=2){
        if (s[k]==0&&s[k+1]==0){c++;}
        else c=0;
    } 



  // cout << a[i]<<" ";*/

  /*cout <<c;*/
  /*
  
  
ll t , d,c=0,f=0,max=0;
str s;
cin >> t;
vector<str> a(t);
vector<ll> b(t);
vector<ll> bi;
for (ll i = 0; i < t; i++){   
    s = "";
    cin>>d;
    for (ll j = 7;j>=0;--j){
        if (d>=(pow(2,j))){d-=pow(2,j); s+="1";}
        else s+="0";
    }
    a[i]=s;


}
for (ll i = 0; i < t; i++)
{   c=0;
    f=0;
    max=0;
    bi.assign(s.size(), 0);
    for (ll k = 0;k<s.size();++k){
        if (a[i][k]=='1'){f=1;}
        if (f){
        if (a[i][k]=='0'){
            c++;

        }else if (a[i][k]=='1'){ bi[k]=c;  c=0;}
        
        max = ((bi[k]>=max)? bi[k]:max);
       } }
       b[i]=max;


}
for (ll i = 0; i < t; i++){   
cout << b[i]<<endl;
//cout << a[i];
}
  
  
  */