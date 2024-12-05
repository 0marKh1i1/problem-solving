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









///////////////////////////////////////
void sol() {

lln(n)
lln(k)
lln(q)
vector<ll> v(n);
for(lli(n)){
    cin>>v[i];
}
ll c=0,ct=0,j=0,a=0;
while(j<n){
    if(v[j]>q){
        j++;
        continue;
    }
    c=0;
    while((j<n)and (v[j]<=q)){
        j++;
        c++;
    }
    if(c>=k){
        a=(c-k)+1;
        ct+=(a+1)*a/2;
    }
}
cout<<ct<<endL;

return;}
///////////////////////////////////////
