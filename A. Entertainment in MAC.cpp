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
/* IO */
ll t=1;
if(1)
cin>>t;
while (t--)
sol();
return 0;}
///////////////////////////////////////
void sol(){

lln(n)
str s; cin>>s;
/* cout<<s[0]<<" "<<s[n-1]<<endL; */
str a=s;
reverse(all(a));
if(s<a+s){
    cout<<s;
}else {
    cout<<str(s.rbegin(),s.rend())<<s;
}
cout<<endl;
return;}
///////////////////////////////////////