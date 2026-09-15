#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int maze[16][16];                           //(x , y) 是 (行 ， 列)
int move_x[4] = {0 , -1 , 0 , 1};           //左上右下
int move_y[4] = {-1 , 0 , 1 , 0};           //左上右下
int m , n , bx , by , ex ,ey ;              //m 是 行 ；n 是 列
bool found = false;
vector<pair<int , int>> path;

void dfx(int x , int y)
{
    for(int i = 0; i < 4; i++)
    {
        int xp = x + move_x[i];
        int yp = y + move_y[i];
        if (x == ex && y == ey)
        {
            found = true;
            for(int i = 0; i < path.size(); i++)
            {
                cout << "(" << path[i].first << "," << path[i].second << ")";
                if(i != path.size() - 1)
                {
                    cout << "->";
                }
            }
            cout << endl;
            return;
        }
        if(xp < 1 || xp > m || yp < 1 || yp > n)
        {
            continue;
        }
        else if(maze[xp][yp] == 0)
        {
            continue;
        }
        else
        {
            path.push_back({xp , yp});
            maze[xp][yp] = 0;
            dfx(xp , yp);
            maze[xp][yp] = 1;
            path.pop_back();
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> m >> n;
    for(int i = 1; i <= m; i++)              // i 代表 行
    {
        for(int j = 1; j <= n; j++)          // j 代表 列
        {
            cin >> maze[i][j];
        }
    }
    cin >> bx >> by >> ex >> ey;
    path.push_back({bx , by});
    maze[bx][by] = 0;
    dfx(bx , by);
    if(!found)
    {
        cout << -1;
    }
}