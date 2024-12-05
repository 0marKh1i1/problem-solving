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
    ll n,m,k,temp,aa=0,ab=0;
    cin>>n>>m>>k;
    vector<ll> a(k+1, 0), b(k+1, 0); 
    for (ll i=0;i<n;i++){
        cin>>temp;
        if(temp <= k){ 
            if(a[temp]==0)
            aa++;
            a[temp]=1;
        }
    }
    for (ll i=0;i<m;i++){
        cin>>temp;
        if(temp <= k){ 
            if(b[temp]==0)
            ab++;
            b[temp]=1;
            a[temp]=1;
        }
    }
    ll ta=accumulate(all(a),0),tb=accumulate(all(b),0);
    if(ta>=k&&aa>=k/2&&ab>=k/2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return;
}
int main() {
IO
ll t;
cin>>t;
while (t--)
sol();
return 0;}