#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define str string
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define pb push_back
#define pf push_front
#define ff first
#define ss second
#define lli(x) long long i=0;i<x;++i
#define lln(x) long long x; cin>>x
using namespace std;
///////////////////////////////////////
void sol(){
    
    lln(n);
    ll c=0;
    for(ll i=1;i<=9;++i){
        ll num = 0;
        while(num <= n){
            num = num * 10 + i;
            if(num <= n){
                c++;
            }
        }
    }
    cout<<c<<"\n";
return;}
///////////////////////////////////////
int main() {
IO
ll t=1;
cin>>t;
while (t--)
sol();
return 0;}