#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
#define endL "\n"
void sol();
const int MOD = 1e9 + 7;
int main() {
IO
ll t;
                                       for(cin>>t;t--;)
sol();
return 0;}



////////////////////////////////////////
void sol(){

    string s;
    cin >> s;
    int n = s.size();
    unordered_map<int, int> prefix_count;
    prefix_count[0] = 1; // Base case: empty prefix has balance 0
    int balance = 0;
    ll result = 0;

    for (int i = 0; i < n; ++i) {
        balance += (s[i] == '1') ? 1 : -1;
        if (prefix_count.find(balance) != prefix_count.end()) {
            result = (result + prefix_count[balance]) % MOD;
        }
        prefix_count[balance]++;
    }

    cout << result << endL;

return;}
///////////////////////////////////////