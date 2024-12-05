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
void sol(){

ll n;
cin >>n;
ll a[n],b[n];
b[n-1]=n;
for (ll i = 0; i < n; i++)
{
    cin>>a[i];
}
for (ll i = n-2; i>=0; i--)
{
    b[i]=(a[i]==a[i+1])?b[i+1]:i+1;
}
ll x;
cin>>x;
for (ll i = 0; i < x; i++)
{
    ll l,r;
    cin>>l>>r;
    r--;l--;
    if(r>=b[l]){
        cout<<l+1<<" "<<b[l]+1<<endl;
    }else  cout<<"-1 -1"<<endl;
}   



return;}
int main() {
IO
ll t=1;
cin>>t;
while (t--)
sol();
return 0;}