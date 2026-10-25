#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int MAXN = 805;
int n , m;                              // n 行 , m 列
vector<pair<int , int>> ans;
vector<pair<int , int>> temp;
int move_x[4] = {-1, 1, 0, 0};
int move_y[4] = { 0, 0,-1, 1}; 
vector<string> maze;
bool vis[805][805];

void dfs(int x , int y)
{
    vis[x][y] = true;
    for(int i = 0; i < 4; i++)
    {
        int ax = x + move_x[i];
        int ay = y + move_y[i];
        if(ax >= 0 && ax <= n - 1 && ay >= 0 && ay <= m - 1 && !vis[ax][ay] && maze[ax][ay] == '#')
        {
            dfs(ax ,ay);
        }
    }
    temp.push_back({x , y});
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        string rub; cin >> rub;
        maze.push_back(rub);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(maze[i][j] == '#' && !vis[i][j])
            {
                temp.clear();
                dfs(i , j);
                if(!temp.empty())
                {
                    temp.pop_back();
                }
                for(auto p : temp)
                {
                    ans.push_back(p);
                }
            }
        }
    }

    cout << ans.size() << endl;
    for(auto p : ans)
    {
        cout << p.first + 1 << " " << p.second + 1<< endl;
    }
}
