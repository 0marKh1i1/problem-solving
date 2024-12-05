#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include<cassert>
using namespace std;
int main(){
string s,s1;
int n,t;
cin >> n >> t>>s;
s1=s;
for (int i=0;i<t;i++){
 for (int j=0;j<n-1;++j){
    if (s1[j]=='B'&&s1[j+1]=='G'){
        char temp = s1[j+1];
        s1[j+1]=s1[j];
        s1[j]=temp;
        j++;
    }
}   
}


cout <<s1;




return 0;}