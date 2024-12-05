#include<bits/stdc++.h>
using namespace std;

const int MAXN = 125;
const int MOD = 1e9 + 7;
long long dp[MAXN][MAXN][MAXN][2][2];

int main() {
    int N;
    cin >> N;
    vector<int> a(N), b(N);
    for (int& i : a) cin >> i;
    for (int& i : b) cin >> i;

    dp[0][0][0][0][0] = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            for (int k = 0; k <= i; k++) {
                for (int l = 0; l < 2; l++) {
                    for (int m = 0; m < 2; m++) {
                        int nj = j + (a[i] > a[i - 1]);
                        int nk = k + (b[i] > b[i - 1]);
                        int nl = l | (a[i] > a[i - 1]);
                        int nm = m | (b[i] > b[i - 1]);
                        dp[i + 1][nj][nk][nl][nm] = (dp[i + 1][nj][nk][nl][nm] + dp[i][j][k][l][m]) % MOD;
                    }
                }
            }
        }
    }

    long long ans = 0;
    for (int j = 0; j <= N; j++) {
        for (int k = 0; k <= N; k++) {
            for (int l = 0; l < 2; l++) {
                for (int m = 0; m < 2; m++) {
                    ans = (ans + dp[N][j][k][l][m]) % MOD;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}