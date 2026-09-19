#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int N = 1e6 + 7;
int n , m;
int a[105];
int dp[105][105];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    dp[0][0] = 1;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j <= m; j++)
        {
            for(int k = 0; k <= min(a[i] , j); k++)
            {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - k]) % N;
            }
        }
    }
    cout << dp[n][m];
}