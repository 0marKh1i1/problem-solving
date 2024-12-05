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
str c=s;
stack<char> t;
for(ll i=0;i<c.size();++i){
    if(t.empty()||t.top()!=c[i]){
        t.push(c[i]);
    }else {
        t.pop();
        c.erase(i-1,2);
        i-=2;
    }      
}   


cout<<c;
return;}
///////////////////////////////////////
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}