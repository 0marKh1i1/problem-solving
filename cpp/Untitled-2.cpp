#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include<cassert>
using namespace std;
int main(){
long long a,b,c,d;
cin >> a >> b >> c >> d;
long double A=a*1.0,C=c*1.0,B=b*1.0,D=d*1.0;

if ((A >= 1000000)||(c >= 1000000))
{
    A /= 1000000;
    C /= 1000000;
}
if ((B >= 1000000)||(D >= 1000000))
{
    B -= 100000000000;
    D -= 100000000000;
}
long long ans1 = pow(A,B), ans2 = pow(C,D) ;
long double a1 = ans1,a2=ans2;
if (a > c && b > d){
    cout << "YES";
}else if (b == d){
    cout << ((a > c)?"YES":"NO");
} else if (a1 > a2) {
    cout << "YES";
}else 
cout << "NO";
cout <<endl<< ans1 <<"     "<<ans2;
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