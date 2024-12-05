#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ff first
#define ss second
#define str string
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    IO
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++){
        cin >> v[i];
    }
    for(ll i = 0; i < n; i++){
        if(v[i] % 2 != 0){
            cout << "First" << endl;
            return 0;
        }
    }
    cout << "Second" << endl;
    return 0;
}