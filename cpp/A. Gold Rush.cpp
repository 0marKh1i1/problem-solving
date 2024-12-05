/*

when i wrote this code only i and allah know what it does
now only allah knows

*/

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
IO
ll t;
for(cin>>t;t--;)
sol();
return 0;}


map<ll,bool> v;
///////////////////////////////////////
bool re(ll n,ll &m){
    if(m==n) return 1;
    else{
    if(n>m and n%3==0){ 
        if(!v.count(n/3)){
            v[n/3]=re(n/3,m);
        }
        if(!v.count((n/3)*2)){
            v[(n/3)*2]=re((n/3)*2,m);
        }
    return v[n/3] || v[((n/3)*2)];
    }
    return 0;}

}
void sol() {
v.clear();
lln(n)
lln(m)
bool a=re(n,m);
if(a) yes
else no
return;}
///////////////////////////////////////