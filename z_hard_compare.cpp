#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include<cassert>
using namespace std;
int main(){
long double a,b,c,d;
cin >> a >> b >> c >> d;
long double A=a*1.0,C=c*1.0,B=b*1.0,D=d*1.0;
if ((b >= 1000000) || (d >= 1000000)){
     B = b / 1000000.0;
     D = d / 1000000.0;
}
if ((a >= 10000) || (c >= 10000)){
     A = a / 10000.0;
     C = c / 10000.0;
}
long double ans1 = pow(A,B), ans2 = pow(C,D) ;
long double a1 = ans1,a2=ans2;

if (a > c && b > d){
    cout << "YES";
}else if (b == d){
    cout << ((a > c)?"YES":"NO");
} else if (a1 > a2) {
    cout << "YES";
}else 
cout << "NO";

return 0;}
/*



cout <<endl <<ans1 <<endl <<ans2 <<endl;


if (ans1 || ans2 > 1000000000000000){
    a1 = ans1/1000000000000000;
    a2 = ans2/1000000000000000;
    //for (ans1 ; a1 > 10000000000000000 ; a1 /= 10 ){}
    //for (ans2 ; a2 > 100000000000000000 ; a2 /= 10 ){}
}


*/