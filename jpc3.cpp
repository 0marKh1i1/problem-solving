#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include<cassert>
using namespace std;
//long long f(long long a);
int main(){
long long n,a=0;
cin >> n;
long long  N = n;
while (N>1){
    for (long long i=2;i<=N;++i){
        if (N%i==0){
            bool istrue = 1;
            for (long long j=2;j<=sqrt(i);++j){
                if(i%j==0){istrue=0;break;}}
         if (istrue){
            N/=i;
            ++a;
            break;
         }}}}
cout << a;

return 0;}
