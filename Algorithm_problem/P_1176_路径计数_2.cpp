#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int N = 1e3 + 5;
int maze[N][N];
int memo[N][N]; // 记忆化数组：记录从 (x, y) 到终点的方案数
int mod = 100003;
int n, m;

int move_x[2] = {1, 0};             //右下
int move_y[2] = {0, 1};

// dfs(x, y) 返回值：从 (x, y) 走向终点 (n, n) 的合法方案数
int dfs(int x, int y)
{
    // 边界检查：走出网格返回 0 种方案
    if (x < 1 || x > n || y < 1 || y > n)
    {
        return 0;
    }

    // 障碍物检查：撞墙返回 0 种方案
    if (maze[x][y] == 1)
    {
        return 0;
    }

    // 目标检查：成功到达终点，算作 1 种有效方案
    if (x == n && y == n)
    {
        return 1;
    }

    // 记忆化检查：以前算过就直接读，不重复计算
    if (memo[x][y] != -1)
    {
        return memo[x][y];
    }

    int total = 0; // 累计从当前格子出发走所有分支的总方案数

    // 模版化的方向循环
    for (int i = 0; i < 2; i++)
    {
        int nx = x + move_x[i];
        int ny = y + move_y[i];

        // 递归走下一个格子，并把方案数累加起来，随时取模
        total = (total + dfs(nx, ny)) % mod;
    }

    // 算完后存入 memo 数组，并返回给上一层
    memo[x][y] = total;
    return memo[x][y];
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        maze[x][y] = 1;
    }

    // 记忆化搜索前，一定要把 memo 初始化为 -1（表示全部未访问过）
    memset(memo, -1, sizeof(memo));

    // 从起点 (1, 1) 出发输出总方案数
    cout << dfs(1, 1) << endl;

    return 0;
}