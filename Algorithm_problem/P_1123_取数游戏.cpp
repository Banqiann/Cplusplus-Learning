#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int MAXN = 10;
int t;
int n , m;              // n 行 m 列
int a[MAXN][MAXN];
int ans = 0;
int cnt[MAXN][MAXN];
int dx[9] = {0, -1, -1, -1, 0, 0, 1, 1, 1};
int dy[9] = {0, -1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int x, int y, int sum)
{
    if(x > n)
    {
        ans = max(ans , sum);
        return;
    }
    // 计算下一个格子坐标
    int nx = x;
    int ny = y + 1;
    if(ny > m)
    {
        nx++; ny = 1; 
    }
    //分支一 : 没选这个格子
    dfs(nx , ny , sum);
    //分支二 ：选了这个格子
    if(cnt[x][y] == 0)
    {
        for(int i = 0; i <= 8; i++)
        {
                int tx = x + dx[i];
                int ty = y + dy[i];
                cnt[tx][ty]++;
        }
        dfs(nx , ny , sum + a[x][y]);
        for(int i = 0; i <= 8; i++)
        {
                int tx = x + dx[i];
                int ty = y + dy[i];
                cnt[tx][ty]--;
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t;
    while(t--)
    {
         cin >> n >> m;
         for(int i = 1; i <= n; i++)
         {
            for(int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
         }
         memset(cnt , 0 , sizeof(cnt));
         ans = 0;
         dfs(1 , 1 , 0);
         cout << ans << endl;
    }
}
