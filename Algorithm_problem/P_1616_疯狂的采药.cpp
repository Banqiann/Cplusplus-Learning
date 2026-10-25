#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int N = 1e7 + 5;
const int N2 = 1e4 + 5;
int t[N2];                         //消耗时间
int w[N2];                         //价值
int tim , m;
int dp[2][N];                 //采了前 i 种药 , 耗时为 j 

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> tim >> m;
    for(int i = 1; i <= m; i++)
    {
        cin >> t[i] >> w[i];
    }
    for(int i = 1; i <= m; i++)
    {
        int cur = i % 2;       // 当前正在计算的这一行
        int pre = 1 - cur;     // 上一次算好的上一行（即第 i-1 种药的结果）

        for(int j = 1; j <= tim ; j++)
        {
            if(j < t[i])
            {
                dp[cur][j] = dp[pre][j];
            }
            else
            {
                dp[cur][j] = max(dp[pre][j] , dp[cur][j - t[i]] + w[i]);
            }
        }
    }
    cout << dp[m % 2][tim];
}
