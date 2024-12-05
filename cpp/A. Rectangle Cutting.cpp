#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define str string
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
using namespace std;
bool case1(ll a,ll b){
    if(b%2==0){
    if((b/2!=b&&a!=a*2)&&(a!=b/2&&b!=a*2))
    return 1;
    }
    if(a%2==0){
    if((a/2!=a&&b!=b*2)&&(b!=a/2&&a!=b*2))
    return 1;
    }
    //else return 0;
    return 0;
}
void sol(){

ll a,b;
cin>>a>>b;
cout<<((case1(a,b))?"YES":"NO")<<endl;

return;}
int main() {
IO
ll t=1;
cin>>t;
while (t--)
sol();
return 0;}