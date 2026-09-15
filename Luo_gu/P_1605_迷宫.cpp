#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int ans = 0;
int maze[10][10];
int move_x[4] = {0 , 0 , -1 , 1}; //上下左右
int move_y[4] = {1 , -1 , 0 , 0}; //上下左右
int n, m, t, sx, sy, fx, fy;

void dfs(int x , int y) //先判断条件，再移动
{
    if(x == fx && y == fy)
    {
        ans += 1;
        return;
    }
    for(int i = 0; i < 4; i++)
    {
        int nx = x + move_x[i];
        int ny = y + move_y[i];
        if(nx < 1 || nx > n || ny < 1 || ny > m)
        {
            continue;
        }
        else if(maze[nx][ny] == 1)
        {
            continue;
        }
        else
        {
            maze[nx][ny] = 1;
            dfs(nx , ny);
            maze[nx][ny] = 0;
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m >> t >> sx >> sy >> fx >> fy;
    for(int i = 0; i < t; i++)
    {
        int a , b;
        cin >> a >> b;
        maze[a][b] = 1;
    }
    maze[sx][sy] = 1;
    dfs(sx , sy);
    cout << ans << endl;
}