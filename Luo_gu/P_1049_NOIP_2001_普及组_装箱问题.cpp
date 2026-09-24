#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int vmax , n;
int dp[35][20005];                         // x 件物品  y 个容积 的时候可以装下的最大容量
int v[35];                                  //第 i 件物品占用的体积

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> vmax >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= vmax; j++)        //我现在开出来的体积
        {
            if(j < v[i])       // 背包清空都放不下
            {
                dp[i][j] = dp[i - 1][j];      //当这个东西没有装进去过
            }
            else                              //如果清空背包还是放得下的
            {
                dp[i][j] = max(dp[i - 1][j] , (dp[i - 1][j - v[i]] + v[i]));                  //不装  ， 装了
            }
        }
    }
    cout << vmax - dp[n][vmax] << endl;
}