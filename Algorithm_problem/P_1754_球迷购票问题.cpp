#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int dp[25][25];             //  i 有几个人拿50元; j 有几个人拿100元
int n;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= 24; i++)
    {
        dp[i][0] = 1;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i >= j)
            {
                dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
            }
        }
    }
    cout << dp[n][n];
}
