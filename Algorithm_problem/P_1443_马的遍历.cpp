#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n , m , x , y;          //n行 m列 x是行 y是列
int move_x[8] = {-2, -2, -1,  1,  2,  2,  1, -1};
int move_y[8] = {-1,  1,  2,  2,  1, -1, -2, -2};
int vis[1000];
int maze[405][405];

void bfs(int x , int y)
{
   queue<pair<int , int>> qu;
   qu.push({x , y});
   while(!qu.empty())
   {
        int ax = qu.front().first;
        int ay = qu.front().second;
        qu.pop();
        for(int i = 0; i < 8; i++)
        {
            int bx = ax + move_x[i];
            int by = ay + move_y[i];
            if (bx >= 1 && bx <= n && by >= 1 && by <= m && maze[bx][by] == -1)
            {
                maze[bx][by] = maze[ax][ay] + 1;
                qu.push({bx, by});
            }
        }
   }

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(maze , -1 , sizeof(maze));
    cin >> n >> m >> x >> y;
    maze[x][y] = 0;
    bfs(x , y);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }
}