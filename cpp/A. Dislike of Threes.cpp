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
    
lln(k);
ll n=0;
while(k>0){
    n++;
    if(!(n%3==0||n%10==3)) k--;
}
cout<<n<<"\n";
return;}
///////////////////////////////////////
int main() {
IO
ll t=1;
cin>>t;
while (t--)
sol();
return 0;}