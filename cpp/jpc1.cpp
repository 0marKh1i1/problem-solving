#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include<cassert>
using namespace std;
int main(){
long long t,n,m,x1,x2,y1,y2,a,b,h,sum;
cin >> t;
while (t--){
    h=0;
cin >>n>>a>>b;
if (a%2==n%2&&b%2!=n%2&&a<=n&&b<=n){
    while (a<n&&b<n){
        h++;
        a+=2;
        b++;
    }
}else if (b%2==n%2&&a%2!=n%2&&a<=n&&b<=n){
    while (a<n&&b<n){
        h++;
        b+=2;
        a++;
    }
}else if (b%2==n%2&&a%2==n%2&&a<=n&&b<=n){
       while (a<n&&b<n){
           if (a<b){
        h++;
        a+=2;
        b++;}
        else {
        h++;
        b+=2;
        a++;}}
}else if (a==b&&b==n&&a==n&&a<=n&&b<=n){
    //cout<<"YES  0\n";
}
else{cout << "NO\n"; continue;}
cout <<"YES "<<h<<endl;
/*
if (h==0){cout <<"YES "<<sum<<endl;}
else if (sum==0){cout <<"YES "<<h<<endl;}
else {cout <<"YES "<<min(h,sum)<<endl;}
*/





}
return 0;}
/*#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include<cassert>
using namespace std;

int main() {
    long long t, n, m, x1, x2, y1, y2, a, b, h, sum;
    cin >> t;
    while (t--) {
        h = 0;
        cin >> n >> a >> b;

 if (b % 2 == n % 2 && a % 2 == n % 2 && a <= n && b <= n) {
            while (a < n && b < n) {
                if (a < b) {
                    h++;
                    a += 2;
                    b++;
                } else {
                    h++;
                    b += 2;
                    a++;
                }
            }
        } else if (a == b && b == n && a == n && a <= n && b <= n) {
            
        } else {
            cout << "NO\n";
            continue;
        }

        cout << "YES " << h << endl;
    }

    return 0;
}
*/