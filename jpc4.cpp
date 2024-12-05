#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include<cassert>
using namespace std;
int main(){
long long n,max=0;
cin >> n;
const long long N=n;
vector<long long> vec(N);
for (int i=0;i<N;++i){
    cin >> vec[i];
    if (vec[i]>max){max = vec[i];}
}
cout << max;
return 0;}
/*for (int j:vec){
    if (vec[j]>max){max = vec[j];}
}*/