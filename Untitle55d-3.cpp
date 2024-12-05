#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include<cassert>
using namespace std;
int main(){ 
string a,c,x,m;
cin >> a;
m = a;
char b[a.length()];
for (int i = 0 ; i < a.length()/2;i++){
    x[i] = a[i];
    a[i] = a[(a.length()-1)-i];
    a[(a.length()-1)-i] = x[i];
}
for (int i = 0;i >=0;i++){
    if ((m[i]=='?')||m[i]!=a[i]){
        
        m[i]++;
    }else break;
}
cout << m;
return 0;}
/*for (int i = 0 ; i < a.length()/2;i++){
    for (;;){
    if (!(m[i]==a[i])){
        a[i]++;
    }else break;
    }
}*/
/*b[3] = 'a';
cout << b;
for (int i = 0 ; i <=a.length()/2;i++){
    b[i] = a[i];
    for (;;){
    if 
}
}*/
/*int x,y;
cin >> x>> y;
x = y + x;
y = x - y;
x = x - y;
cout <<x<<"   "<<y; */
/*long long x,y,a,b,l,t,m;
cin >> t >> m >>b;
x = m*2 + b;
y = t *60 / x;
cout <<y;*/

/*long long x,y,a,b,l;
cin >> x>> y;
cout << ((y%x==0)?0:x-(y%x));*/
/*
cin >> x >>y >>a >>b>>l;
long double a1 = x/a;
long double a2 = y/b;
long double a3 = l / ((a1+a2));
cout << fixed<<setprecision(6) <<a3;*/
/*cin >> a >> b >>c;
long long d = ((25*2)) + (35);
h = a/(((d/60)%60));
cout << h;*/
/*cin >> a;
//if (a > 60*60){
  //  cout << (a/3600) % 12 <<":"<<(a/60)%60:
//}
b = (a/3600);
c = ((a/60) - (b *60)) % 60;
d = (a-(c*60)) % 60;
cout << b<<":"<<c<<":"<<d;*/


/*long long a,b,c,d;
cin >> a >> b;
if (b <= a){
cout << a - b;
}else cout << "0";*/