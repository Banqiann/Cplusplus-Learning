#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n , m;              // n 种菜  口袋里还有 m 元
int price[105];         //第 i 道菜花费多少钱
int dp[105][10005];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }
    for(int i = 1; i <= n; i++)
    {
        cin >> price[i];
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(j < price[i])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - price[i]];
            }
        }
    }
    cout << dp[n][m];
}