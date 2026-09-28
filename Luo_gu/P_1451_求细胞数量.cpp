#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

vector<string> maze;                    //line[2][3] 即为第三行第四个
int move_x[4] = {-1, 1, 0, 0}; // 上、下、左、右
int move_y[4] = { 0, 0,-1, 1};
int vis[105][105];                      //访问过的就不走了
int ans = 0;
int n , m;

void dfs(int x , int y)                              //通过扫描，把所有连通块找到，并且在vis中标示出来
{
    for(int i = 0; i < 4; i++)
    {
        int ax = x + move_x[i];
        int ay = y + move_y[i];
        if(ax < 0 || ax > n - 1 || ay < 0 || ay > m - 1)    //越界
        {
            continue;
        }
        else if(vis[ax][ay] != 0 || maze[ax][ay] == '0')  //走过 或者 没细胞
        {
            continue;
        }
        else
        {
            vis[ax][ay] = 1;
            dfs(ax , ay);
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;                      //总共有 n 行 , m 列
    for(int i = 0; i < n; i++)          //读取数据
    {
        string rub;
        cin >> rub;
        maze.push_back(rub);            //数据从 0 开始
    }
    for(int i = 0; i < n; i++)          //i 行 j 列
    {
        for(int j = 0; j < m; j++)
        {
            if(maze[i][j] != '0' && vis[i][j] == 0)   //有细胞 并且 没走过
            {
                ans += 1;
                vis[i][j] = 1;
                dfs(i , j);
            }
        }
    }
    cout << ans;
}
