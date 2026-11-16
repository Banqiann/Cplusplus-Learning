#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n , m;                          // n 个人 , m 次传球
const int MAXN = 35;
int dp[MAXN][MAXN];                // 第 i 次传球，给第 j 个人 

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    dp[0][1] = 1;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(j == 1)
            {
                dp[i][j] += dp[i - 1][2] + dp[i - 1][n];
            }
            else if(j == n)
            {
                dp[i][j] += dp[i - 1][1] + dp[i - 1][n - 1]; 
            }
            else
            {
                dp[i][j] += dp[i - 1][j - 1] + dp[i - 1][j + 1];
            }
        }
    }
    cout << dp[m][1];
}
