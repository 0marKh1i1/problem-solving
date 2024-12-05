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



///////////////////////////////////////
void sol() {
    lln(n)
    vector<ll> a(n);
    ll mx=0;
    for(lli(n)) {cin >> a[i]; mx+=a[i];}
    ll l=0,r=0,c=0,x=0,t=0,y=0;
    
    for(lli(n)){
        if(a[i]==0){
            l++;
        }else break;
    }
    
    for(ll i=n-1;i>=0;i--){
        if(a[i]==0){
            r++;
        }else break;
    }
    if(l==n||r==n){
        cout<<(n*(n+1)/2)<<endL;
        return;
    }
    ll n1=n-r;
    c=(n1*(n1-1))/2;
    t=l+r;
    y=(r*(r-1))/2;
    ll f=(l*(l-1))/2;
    if(n==1){cout<<1<<endL;}
    else{
    if(r==0||l==0){
    if(l>3){
        cout<<l+1<<endL;
    }else if(r>3){
        cout<<r+1<<endL;
    }
    else if(l==3||r==3)
    {cout<<f+y+1<<endL;}
    else if(l==2||r==2){
    cout<<3<<endL;
    }
    else if(l==1||r==1){
    cout<<2<<endL;
    }else{
         cout<<1<<endL;
    }
    }
    else{
        ll nas=(l*(r+1)+1+r);
        cout<<nas<<endL;
    }}
    /* cout<<(l+1)*(r+1)<<endL; */
return;}
///////////////////////////////////////