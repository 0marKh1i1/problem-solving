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
/* IO
ll t;
for(cin>>t;t--;) */
sol();
return 0;}

class mine{

private:
public:
    ll a;
    ll b;
    void enta(ll l){
        a=l;
    }
    void entb(ll r){
        b=r;
    }
    ll getall(){
        return a*b;
    }

};

///////////////////////////////////////
void sol(){
mine mine1;
ll x,y;
cout<<"enter a:";
cin>>x;
cout<<"enter b:";
cin>>y;
mine1.enta(x);
mine1.entb(y);
/* mine1.a=5;
mine1.b=10; */
cout<<mine1.getall();

return;}
///////////////////////////////////////