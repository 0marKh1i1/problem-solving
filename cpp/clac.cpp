#include <bits/stdc++.h>
using namespace std;



int main() {
    long double sum=0;

    for (int i=2; i<=1e7; i++) {
       
        sum += ( (1.0 / (i+2.5) ) - (1.0 / (i+3.5) ) );
        cout<<fixed<<setprecision(5)<<sum<<endl;


    }

    
    
    return 0;
}