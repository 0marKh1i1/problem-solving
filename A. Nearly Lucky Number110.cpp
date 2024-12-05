#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include<cassert>
using namespace std;
int main(){
long long n,a=0,n1;
cin >> n;
n1 =n;
while (n >0){
    n1=n%10;
    if (n1==4||n1==7) a++;
    n/=10;}
if (a==4||a==7) cout << "YES";
else cout << "NO";
return 0;}