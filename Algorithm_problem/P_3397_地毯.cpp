#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n , m;                      // n * n 的格子上 有 m 张地毯
const int N = 1e3 +5;
int dp[N][N];
int blanket[N][N];

signed main()   
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int bg_x , bg_y , ed_x , ed_y;
        cin >> bg_x >> bg_y >> ed_x >> ed_y;
        dp[bg_x][bg_y] += 1;
        dp[ed_x + 1][bg_y] -= 1;
        dp[bg_x][ed_y + 1] -= 1;
        dp[ed_x + 1][ed_y + 1] += 1;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            blanket[i][j] = blanket[i - 1][j] + blanket[i][j - 1] - blanket[i - 1][j - 1] + dp[i][j];
            cout << blanket[i][j] << " ";
        }
        cout << endl;
    }
}