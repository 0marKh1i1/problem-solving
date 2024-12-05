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
#define endL "\n"
#define ff first
#define isit 1
///////////////////////////////////////
void sol(){

lln(n);
str s,t; cin>>s>>t;
ll c=1;
for(ll i=1;i<n;++i){
    if(s[i]==t[i-1]){
        c++;
    }else {
        if(s[i]=='1'){
            break;
        }
        c=1;
        t[i-1]=s[i];
    }
}
cout<<s[0]<<t<<endL<<c<<endL;
return;}
///////////////////////////////////////
int main() {
IO
ll t=1;
if(isit)
cin>>t;
while (t--)
sol();
return 0;}
