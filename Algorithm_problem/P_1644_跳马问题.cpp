#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n , m;
int move_x[] = {1 , 2 , 2 ,1};              //往右边的四个方向跳
int move_y[] = {2 , 1 , -1 , -2};
int memo[25][25];

int dfs(int x , int y)
{
    if(x > m || y > n || y < 0)
    {
        return 0;
    }
    if(x == m && y == n)
    {
        return 1;
    }
    if(memo[x][y] != -1)
    {
        return memo[x][y];
    }
    int total = 0;
    for(int i = 0; i < 4; i++)
    {
        int dx = x + move_x[i];
        int dy = y + move_y[i];
        total += dfs(dx , dy);
    }
    memo[x][y] = total;
    return total;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(memo, -1, sizeof(memo));         //memo全部初始化成 -1
    cin >> n >> m;              //n 行 , m 列   走到(m , n)就算结束
    cout << dfs(0 , 0);
}
