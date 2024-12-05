#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include<cassert>
using namespace std;
long long p(long long a){
    for (long long i=1;i<=a;++i){
        if (pow(2,i)==a){return 1;}
        
    } return 0;
}
int main(){
long long n,s=0;
cin >>n;
cout <<((p(n)?"YES":"NO"));
return 0;}