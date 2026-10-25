#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int maze[35][35];
vector<pair<int , int>> dot;
int move_x[4] = {-1 , 0 , 1 , 0};                   //上、左、下、右
int move_y[4] = {0 , -1 , 0 , 1};
int n;

void dfs(int x , int y)
{
    for(int i = 0; i < 4; i++)
    {
        int ax = x + move_x[i];
        int ay = y + move_y[i];
        if(ax < 0 || ax > n + 1 || ay < 0 || ay > n + 1)
        {
            continue;
        }
        if(maze[ax][ay] != 0)
        {
            continue;
        }
        if(maze[ax][ay] == 0)
        {
            maze[ax][ay] = 3;
        }
        dfs(ax , ay);
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; i++)             // i行
    {
        for(int j = 1; j <= n; j++)         // j列
        {
            cin >> maze[i][j];
        }
    }
    int x = 0;
    int y = 0;
    maze[x][y] = 3;
    dfs(x , y);
    for(int i = 1; i <= n + 1; i++)             // i行
    {
        for(int j = 1; j <= n + 1; j++)         // j列
        {
            if(maze[i][j] == 0)
            {
                maze[i][j] = 2;
            }
        }
    }
    for(int i = 1; i <= n + 1; i++)             // i行
    {
        for(int j = 1; j <= n + 1; j++)         // j列
        {
            if(maze[i][j] == 3)
            {
                maze[i][j] = 0;
            }
        }
    }
    for(int i = 1; i <= n; i++)             // i行
    {
        for(int j = 1; j <= n; j++)         // j列
        {
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }
}