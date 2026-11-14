#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n;
const int MAXN = 505;
int dp[MAXN];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    dp[0] = 1;
    for(int i = 1; i <= n - 1; i++)
    {
        for(int j = n; j >= i; j--)
        {
            dp[j] += dp[j - i];
        }
    }
    cout << dp[n];
}
