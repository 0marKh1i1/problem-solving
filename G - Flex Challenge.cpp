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
const int MOD = 1e9 + 7;
void sol();
int main() {
IO
ll t;
for(cin>>t;t--;)
sol();
return 0;}


// 5 * 4 * 3
// 60
// 48
// 40
// 45
///////////////////////////////////////
void sol(){

lln(n)
priority_queue<ll> arr;
vector<ll> a(n);
for(lli(n)) {
    cin >> a[i];
    arr.push(a[i]);
}
ll temp = arr.top();
arr.pop();
temp--;
arr.push(temp);
ll p = 1;
while(!arr.empty()) {
    p = (p * arr.top()) % MOD;
    arr.pop();
}
cout << p << endL;


return;}
///////////////////////////////////////