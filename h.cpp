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

    // vector<ll> vect(4);
    // for(ll& x : vect){
    //     cin >> x;
    // }
    // sort(vect.begin(), vect.end());
    // for(int i = 1; i < 4; i++){
    //     if(vect[i] == vect[i - 1]){
    //         cout << "YES\n";
    //         return;
    //     }
    // }
    // cout << "NO\n";
    
    int t, d, m; cin >> t >> d >> m;
    vector<int> v(m + 2);
    v[0] = 0; v[m + 1] = d;
    for(int i = 1; i < m + 1; i++){
        cin >> v[i];
    }
    for(int i = 0; i <= m; i++){
        if(v[i + 1] - v[i] >= t){
            cout << "Y" << endl;
            return;
        }
    }
    cout << "N" << endl;


return;}
///////////////////////////////////////