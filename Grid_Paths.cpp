#include<bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;
using pii = pair<int, int>;

int32_t main() {
    int n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    vector<vector<int>> dp(n, vector<int>(n, 0));
    dp[n-1][n-1] = 1;
    const int MOD = 1e9 + 7;

    for (int i = n-1; i >= 0; i--) {
        for (int j = n-1; j >= 0; j--) {
            if (grid[i][j] == '*') {
                dp[i][j] = 0;
                continue;
            }
            if (i == n-1 && j == n-1) {
                continue;
            }
            int down = (i+1 < n) ? dp[i+1][j] : 0;
            int right = (j+1 < n) ? dp[i][j+1] : 0;
            dp[i][j] = (down + right) % MOD;
        }
    }

    cout << dp[0][0] << endl;
    return 0;
}
