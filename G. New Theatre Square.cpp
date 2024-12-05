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

lln(n); lln(m); lln(x); lln(y);
y=min(y,x*2);
vector<vector<char>> vv(n,vector<char>(m));
for(ll i=0;i<n;++i){
    for(ll j=0;j<m;++j){
        cin>>vv[i][j];
    }
}
ll c=0;
for(ll i=0;i<n;++i){
    for(ll j=0;j<m;++j){
        if(j<m-1&&vv[i][j]=='.'&&vv[i][j+1]=='.'){
            c+=y;
            j++;
       }else if(vv[i][j]=='.'){
            c+=x;
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