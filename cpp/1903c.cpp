#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include<cassert>
//#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >>n;
int N =n,c=n,d=0,g=n,k=0,w=0;
while (g>0){
    k++;
    g/=10;}
const int K =k;
int arr[K];
int arr1[K];
while (c>0){
    N=c%10;
    arr1[d]=N;
    c/=10;
    d++;}
for (int i=d-1;i>=0;--i){
    arr[i]=arr1[d-1-i];}
for (int i=0;i<d;++i){
    if( arr[i]!=arr[d-1-i]) {w=0;break;} else w=1;}
if (w==1)cout << n<<" is a palindrome";
else  cout << n<<" is not a palindrome";
return 0;}