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
#define lli(i,x) long long i=0;i<x;++i
#define lln(x) long long x; cin>>x
using namespace std;
///////////////////////////////////////
void sol(){

lln(n);
str s;
cin>>s;
vector<ll> v(26,0);
for(lli(i,n)){
    if(i!=0&&v[s[i]-'A']==1&&s[i]!=s[i-1]){
        cout<<"NO"<<endl;
        return;
    }else
    v[s[i]-'A']=1;
}
cout<<"YES"<<endl;
return;}
///////////////////////////////////////
int main() {
IO
ll t=1;
cin>>t;
while (t--)
sol();
return 0;}