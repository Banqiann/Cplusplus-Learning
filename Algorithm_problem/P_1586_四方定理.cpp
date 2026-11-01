#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int MAXN = 32768;
int n;
int dp[MAXN][5];

void solve()
{
    memset(dp , 0 , sizeof(dp));
    dp[0][0] = 1;
    for(int q = 1; q * q <= MAXN; q++)
    {
        int sq = q * q;
        for(int j = sq; j <= MAXN; j++)
        {
            for(int k = 1; k <= 4; k++)
            {
                dp[j][k] += dp[j - sq][k - 1];
            }
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    solve();
    for(int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        cout << dp[num][1] + dp[num][2] + dp[num][3] + dp[num][4] << endl;
    }
}
