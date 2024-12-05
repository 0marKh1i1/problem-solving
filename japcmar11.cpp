#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    long long t;
    cin>>t;
    while(t--){
        ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (((a <= d )and(a>=c))||((b <= d )and(b>=c)))  {
        cout << 0 << "\n";
    } else {
        if(d>a&&b<c){
            ll temp = min(abs(24-d+a),abs(c-b));
            cout<<temp<<endl;
        }else{
             ll temp = min(abs(a-d),abs(24-b+c));
             cout<<temp<<endl;
        }

    }
    
}
    return 0;
}
