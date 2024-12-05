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
#define MOD 1e9+7
#define ss second
#define ff first
#define endL "\n"
void sol();
int main() {
IO
ll t=1;
//cin >> t;
for(t;t--;) 
sol();
return 0;}



///////////////////////////////////////
void sol(){

    int n, k; cin >> n >> k;
    vector<pair<int, int>> v(n), vs(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
     
        vs[i].first = v[i].first;
        vs[i].second = v[i].second;
    }
    sort(vs.begin(), vs.end());
    for(int i = 0; i < n; i++){
        if(vs[i].second != v[i].second){
            cout << "N\n"; return;
        }
    }
    cout << "Y\n";
    


return;}
///////////////////////////////////////