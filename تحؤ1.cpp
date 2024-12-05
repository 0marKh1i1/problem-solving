#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <numeric>
#include<algorithm>
#include<cassert>
using namespace std;


int main(){
long long n,a=1,one=2,two=3,three=5;
cin >>n;
if (2*3*5==n){cout << "YES\n1 1 1";}
else if (3*5==n){cout << "YES\n0 1 1";}
else if (2*5==n){cout << "YES\n1 0 1";}
else if (3*2==n){cout << "YES\n1 1 0";}
else if (3==n){cout << "YES\n0 1 0";}
else if (5==n){cout << "YES\n0 0 1";}
else if (2==n){cout << "YES\n1 0 0";}
else cout <<"No";
return 0;}
/*int n,s=0;
cin >>n;
for (int i=0;i<=n;++i){
    for (int j=0;j<=n;++j){
         for (int k=0;k<=n;++k){
            if (i+j+k==n){s++;}
}
}
}
    cout <<s;*/


    /*long long n,a=1,one=0,two=0,three=0;
cin >>n;
while(a<n){
    if (n%5==0){a*=5;one++;}
    else if (n%2==0){a*=2;two++;}
    else if (n%3==0){a*=3;three++;}
} 
if (one ==0 && two ==0 && three ==0 ){
   cout << "NO";
}else   cout << "YES\n" << one <<" "<<two<<" "<<three;
//cout << ((one ==0 && two ==0 && three ==0 )?"Yes\n" << one <<" "<<two<<" "<<three:"NO" );
*/