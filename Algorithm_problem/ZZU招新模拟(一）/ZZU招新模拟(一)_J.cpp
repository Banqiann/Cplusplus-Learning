#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int MAXN = 2e5 + 5;
int n;
int dp[MAXN];
int k[MAXN]; int b[MAXN]; int c[MAXN];
int pen_sum = 0;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> k[i] >> b[i] >> c[i];
        pen_sum += c[i];
    }
    for(int i = 1; i <= n; i++)
    {
        int it = max(0ll , i - k[i] - 1);
        int choose = dp[it] + b[i] + c[i];
        if(choose > dp[i - 1])
        {
            dp[i] = choose;
        }
        else
        {
            dp[i] = dp[i - 1];
        }
    }
    cout << dp[n] - pen_sum;
}
