#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
void sol();
int main() {
IO
ll t;
for(cin>>t;t--;)
sol();
return 0;}



///////////////////////////////////////
bool isPossible(long long mid, vector<long long>& a, vector<long long>& b, long long k) {
    long long powderNeeded = 0;
    for (int i = 0; i < a.size(); i++) {
        powderNeeded += max(0LL, mid * a[i] - b[i]);
        if (powderNeeded > k) return false;
    }
    return true;
}

void sol() {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    long long low = 0, high = 1e9;
    while (high - low > 1) {
        long long mid = (low + high) / 2;
        if (isPossible(mid, a, b, k)) low = mid;
        else high = mid;
    }
    cout << low << endl;
}

///////////////////////////////////////