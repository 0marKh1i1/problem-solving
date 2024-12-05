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
ll n,c=0;
str s;
cin>>n>>s;
stack<ll> v;
for(ll i=0;i<n;i++){
    if(s[i]=='('){
        v.push(s[i]);
    }else if(s[i]==')'){
        if(!v.empty()){
            v.pop();
        }else c++;
    }
}
cout<<c<<endl;


return;}
///////////////////////////////////////
int main() {
IO
ll t=1;
cin>>t;
while (t--)
sol();
return 0;}