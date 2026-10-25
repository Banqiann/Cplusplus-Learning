#include<bits/stdc++.h>
using namespace std;

int f[1005][1005];
int w[1005];
int v[1005]; 

int main()
{
    int n, C; // n 为物品数量，C 为背包总承重
    cin >> n >> C;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i] >> v[i];
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= C; j++)
        {
            if (j < w[i])
            {
                // 容量不足，无法装入当前物品，直接继承上一行状态
                f[i][j] = f[i - 1][j];
            }
            else
            {
                // 容量充足，对比“不装”与“装入”的最大价值
                f[i][j] = max(f[i - 1][j], v[i] + f[i - 1][j - w[i]]);
            }
        }
    }
    cout << f[n][C];
}