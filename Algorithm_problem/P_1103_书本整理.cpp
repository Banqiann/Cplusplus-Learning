#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n , k;
const int MAXN = 105;
vector<pair<int , int>> mp;
int dp[MAXN][MAXN];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //准备工作
    cin >> n >> k;
    int m = n - k;      //m 是 需要保留的书 的数量
    mp.push_back({0 , 0});
    for(int i = 1; i <= n; i++)
    {
        int a , b; cin >> a >> b;
        mp.push_back({a , b});
    }
    sort(mp.begin() , mp.end());
    memset(dp, 0x3f , sizeof(dp));
    for(int i = 1; i <= n; i++)
    {
        dp[i][1] = 0;
    }
    // dp 计数
    for(int i = 2; i <= n; i++)
    {
        for(int j = 2; j <= min(m , i); j++)
        {
            for(int p = j - 1; p < i; p++)
            {
                dp[i][j] = min(dp[i][j] , dp[p][j - 1] + abs(mp[i].second - mp[p].second));
            }
        }
    }
    int ans = 0x3f3f3f;
    for(int i = m; i <= n; i++)
    {
        ans = min(ans , dp[i][m]);
    }
    cout << ans;
}
