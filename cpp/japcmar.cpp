#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define llj(i,x) long long i=0;i<x;++i
#define lli(x) long long i=0;i<x;++i
#define lln(x) long long x; cin>>x;
#define all(x) x.begin(), x.end()
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define ld long double
#define pf push_front
#define ll long long
#define pb push_back
#define str string
#define ss second
#define ff first
#define endL "\n"
void sol();
int main() {
IO
ll t;
for(cin>>t;t--;)
sol();
return 0;}



///////////////////////////////////////
void sol(){

lln(a)
lln(b)
lln(c)
lln(d)
    ll r = 0, l = 0;

    if (c>=a&&c<=b||a>=c&&a<=d)cout << 0 << endl;
    else {
        if (d > a)r = 24 - d + a;
        else if (a > d)r = a - d;
        if (b > c)l = 24 - b + c;
        else if (c > b)l = c - b;
        cout << min(l, r) << endl;
    }
 


return;}
///////////////////////////////////////