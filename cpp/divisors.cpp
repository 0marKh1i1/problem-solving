#include <iostream>
#include <cmath>
using namespace std;

long long sum(long long a,long long b){
   long long f=0;
        if (b%a==0) f+=a;
return f;}

int main(){
    long long x,y=0;
    cin >>x;
    for (int i =1;i<=x;i++){
        if (i==sum(i,x)) cout <<i<<" ";}
return 0;}