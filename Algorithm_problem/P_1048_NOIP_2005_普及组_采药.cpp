#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int MAXN = 1005;
int dp[MAXN];
int t[MAXN] , v[MAXN];
int all, m;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> all >> m;
    for(int i = 1; i <= m; i++)
    {
        cin >> t[i] >> v[i];
    }
    for(int i = 1; i <= m; i++)
    {
        for(int j = all; j >= t[i]; j--)            //j 是剩余时间
        {
            dp[j] = max(dp[j] , dp[j - t[i]] + v[i]);
        }
    }
    cout << dp[all];
}
