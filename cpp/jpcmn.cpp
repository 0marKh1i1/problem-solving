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
//IO
cin.tie(0)->sync_with_stdio(0);
ll t;
for(cin>>t;t--;)
sol();
return 0;}



///////////////////////////////////////
void sol() {
    lln(n)
    vector<ll> a(n);
    ll max_sum = 0, max_count = 0;
    for(lli(n)) {
        cin >> a[i];
        if (a[i] > max_sum) {
            max_sum = a[i];
            max_count = 1;
            i=0;
        } else if (a[i] == max_sum) {
            max_count++;
        }
    }
    cout << max_count << endL;
}
///////////////////////////////////////