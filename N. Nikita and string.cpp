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

str s; cin>>s;
vector<ll> v(3,0);
 for (char c : s) {
        if (c == 'a') {
            dp = {dp[0] + 1, max(dp[0] + 1, dp[1] + 1), max(dp[2] + 1, dp[1])};
        } else {
            dp = {dp[0], dp[1] + 1, dp[2]};
        }
    }
    cout << *max_element(dp.begin(), dp.end());

return;}
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}