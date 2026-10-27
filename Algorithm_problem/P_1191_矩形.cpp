#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int MAXN = 155;
int n;
vector<string> maze;
int dp[MAXN][MAXN];           // dp[i][j] 表示以 (i, j) 为右端点，在第 i 行向左连续的 'W' 数量（包含自身）
int ans = 0;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string rub; cin >> rub;
        maze.push_back(rub);
    }
    for(int i = 0; i < n; i++)              // 维护 dp 数组
    {
        for(int j = 0; j < n; j++)
        {
            if(maze[i][j] == 'W')
            {
                if(j == 0)
                {
                    dp[i][j] = 1;
                }
                else
                {
                    dp[i][j] = dp[i][j - 1] + 1;
                }
            }
        }
    }
    for(int i = 0 ;i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {   
            if(maze[i][j] == 'B')
            {
                continue;
            }
            else
            {
                int min_w = dp[i][j];
                for(int k = i; k >= 0; k--)
                {
                    min_w = min(min_w , dp[k][j]);
                    if(min_w == 0)
                    {
                        break;
                    }
                    ans += min_w;
                }
            }
        }
    }
    cout << ans;
}
