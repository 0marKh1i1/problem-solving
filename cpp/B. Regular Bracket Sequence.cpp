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
///////////////////////////////////////
void sol(){

str s; cin>>s;
ll a=0,b=0;
for(ll i=0; i<s.size();++i){
    if(s[i]=='('){
        a++;
    }else if (s[i]==')'&&a>0){
        a--;
        b+=2;
    }
}
cout<<b;
return;}
///////////////////////////////////////
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}