
#include<bits/stdc++.h>
#include <numeric> // Add the missing include directive for the <numeric> header.

using namespace std;

const int MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    vector<vector<int>> grid(2, vector<int>(N));
    for(auto &row : grid)
        for(auto &num : row)
            cin >> num;

    vector<vector<int>> dp(N+1, vector<int>(N+1));
    dp[0][0] = 1;

    for(int i = 1; i <= N; ++i) {
        vector<int> sum_dp(N+1);
        for(int j = 1; j <= N; ++j)
            sum_dp[j] = (sum_dp[j-1] + dp[i-1][j]) % MOD;

        for(int j = 1; j <= N; ++j) {
            if(grid[0][i-1] <= j && grid[1][i-1] <= j)
                dp[i][j] = sum_dp[j];
            else if(grid[0][i-1] <= j || grid[1][i-1] <= j)
                dp[i][j] = (sum_dp[j] - sum_dp[min(grid[0][i-1], grid[1][i-1])-1] + MOD) % MOD;
            else
                dp[i][j] = (sum_dp[j] - sum_dp[max(grid[0][i-1], grid[1][i-1])-1] + dp[i-1][min(grid[0][i-1], grid[1][i-1])-1] + MOD) % MOD;
        }
    }

    cout << accumulate(dp[N].begin(), dp[N].end(), 0LL) % MOD;

    return 0;
}