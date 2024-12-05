#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include<cassert>
using namespace std;


int main(){
long long n;
cin >> n;
const long long N =n;
vector<long long> vec(N);
vec[0]=0;
vec[1]=1;
if (n==1){cout <<vec[0]; return 0;}
else if (n==2){cout <<vec[1]; return 0;}
else if (n>2){
cout <<vec[0]<<" ";
cout <<vec[1];
for (int i=2;i<n;++i){
    vec[i]=vec[i-1]+vec[i-2];
    cout << " ";
    cout <<vec[i];
}}
return 0;}
