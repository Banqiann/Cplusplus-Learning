#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int MAXN = 2e3 +5;
int maze[MAXN][MAXN];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    maze[1][n] = 1;
    for(int i = 2; i <= n; i++)             // i 行
    {
        for(int j = 1; j <= 2*n; j++)         // j 列
        {
            maze[i][j] = maze[i - 1][j - 1] ^ maze[i - 1][j + 1];
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 2*n; j++)
        {
            if(maze[i][j] == 1)
            {
                cout << "#";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
