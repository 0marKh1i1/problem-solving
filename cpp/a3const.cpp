#include <iostream>

using namespace std;

int main()
{
    long long t,n,a,b,s;
    cin >>t;
    while(t--){
        s=0;
        cin >>n>>a>>b;
        while(a<n&&b<n){
            s++;
            if (a<=b){a+=2;b++;}
            else {a++;b+=2;}
        }
        if (a==n&&b==n){cout <<"YES "<<s<<endl;}
        else cout <<"NO\n";
    }
    
    
    
    return 0;
}
