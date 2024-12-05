#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define str string
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
using namespace std;

int main() {
    IO
    ll n, k;
    cin >> n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ll sum=0,ans=LLONG_MAX,index=1;
    FOR(i,0,k){
        sum+=v[i];
    }
    if(ans>sum){index=1; ans=sum;}
    FOR(i,k,n){
        sum+=v[i]-v[i-k]; 
        if(ans>sum){ans=sum; index=i-k+2;}
    }
    cout<<index;

    return 0;
}