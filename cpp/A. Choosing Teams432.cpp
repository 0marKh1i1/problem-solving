#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include<cassert>
using namespace std;
int main(){
int n,k,o=0;
cin >> n >> k;
vector<int> arr(n);
for (int i=0;i<n;i++){
    cin >> arr[i];}
for (int i=0;i<n;i++){
    if(arr[i]+k<=5) o++;}
cout << o/3;

return 0;}




/*vector<vector<int>> vec(n1,vector<int>(3,0));
    
    for (int i=0;i<n1;i++){
    if (arr[i]>=5) n1--;}
    for (int i=0;i<n1;i++){
    if (n1%3!=0) n1-=n1%3;}
    int eligible = 0;
    for (int i = 0; i < n; ++i) {
        eligible += max(0, 5 - arr[i]); // Count students who can participate more
        cout << eligible<<";";
    }*/


    //const int n2 = n1;