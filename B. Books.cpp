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
ll l=0;
void sol();
int main() {
IO
/* ll t;
for(cin>>t;t--;) */
sol();
return 0;}
///////////////////////////////////////
void sol() {

lln(n)
lln(t)
vector<ll> v(n);
for(lli(n))
    cin>>v[i];
ll l=0,r=0,mx=0,now=0;
while(r<n){
        if(now+v[r]<=t){
            now+=v[r];
            r++;
            mx=((mx<=r-l)?r-l:mx);
            /* mx=max(mx,r-l); */
        }else if(l<r){
            now-=v[l];
            l++;
        }else {
            r++;
            l++;
        }
}
cout<<mx;
return;}
///////////////////////////////////////