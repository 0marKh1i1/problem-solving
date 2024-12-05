#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define str string
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define llj(i,x) long long i=0;i<x;++i
#define lli(x) long long i=0;i<x;++i
#define lln(x) long long x; cin>>x
#define all(x) x.begin(), x.end()
#define pb push_back
#define pf push_front
#define ff first
#define ss second
#define endL "\n"
using namespace std;
///////////////////////////////////////
void sol(){

    lln(n);
    vector<ll> v(n);
    for(lli(n))
        cin>>v[i];
    vector<ll> vs=v;
    sort(all(vs));
    lln(m);
    vector<ll> v1(n),vs1(n);
    ll temp=0,temps=0;
    for(lli(n)){
        temp+=v[i];
        temps+=vs[i];
        v1[i]=temp;
        vs1[i]=temps;
    }
    for(lli(m)){
        lln(t);
        lln(l);
        lln(r);
        switch(t){
            case 1:
                cout<<v1[r-1]-((l-2>=0)?v1[l-2]:0)<<endL;
            break;
            case 2:
                cout<<vs1[r-1]-((l-2>=0)?vs1[l-2]:0)<<endL;
            break;
        }
    }
return;}
///////////////////////////////////////
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}