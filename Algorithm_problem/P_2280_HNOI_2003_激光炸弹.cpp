#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int N = 5e3 +5;
int n , m;              //总共有n个目标 ， 爆炸正方形的边长为m
int dp[N][N];
int ans = 0;
int max_n = -0x3f3f3f;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        int x , y , v;
        cin >> x >> y >> v;
        dp[x + 1][y + 1] += v;
    }
    for (int i = 1; i <= 5001; i++)
    {
        for (int j = 1; j <= 5001; j++)
        {
            dp[i][j] += dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
        }
    }
    for (int i = m; i <= 5001; i++)
    {
        for (int j = m; j <= 5001; j++)
        {
            int current = dp[i][j] - dp[i - m][j] - dp[i][j - m] + dp[i - m][j - m];
            max_n = max(max_n , current);
        }
    }
    cout << max_n;
}