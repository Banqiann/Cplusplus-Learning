#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int MAXN = 1e6 + 5;
int h[MAXN];
int dp[MAXN];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    dp[1] = h[1]; dp[2] = h[2]; dp[3] = h[3];
    for(int i = 4; i <= n; i++)
    {
        dp[i] = min(dp[i - 2] , min(dp[i - 1] , dp[i - 3])) + h[i];
    }
    cout << min(dp[n - 2] , min(dp[n - 1] , dp[n]));
}
