#include <bits/stdc++.h>

#define ld long double
#define str string
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)


typedef long long ll;
using namespace std;
bool isSubsequence(string s, string t) {
    int j = 0;
    for (int i = 0; i < s.size() && j < t.size(); i++)
        if (s[i] == t[j])
            j++;
    return j == t.size();
}

void solve() {
    int n, k, m;
    string s;
    cin >> n >> k >> m >> s;
    vector<string> all;
    string t(n, 'a');
    for (int i = 0; i < pow(k, n); i++) {
        all.push_back(t);
        for (int j = n - 1; j >= 0; j--) {
            if (t[j] - 'a' + 1 < k) {
                t[j]++;
                break;
            } else {
                t[j] = 'a';
            }
        }
    }
    for (string t : all) {
        if (!isSubsequence(s, t)) {
            cout << "NO\n" << t << "\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}