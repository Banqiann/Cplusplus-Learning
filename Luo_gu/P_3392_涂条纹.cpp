#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n , m;                      // n 行 m 列
const int MAXN = 55;
int w[MAXN] , r[MAXN] , b[MAXN];
vector<string> fg;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        string a; cin >> a;
        fg.push_back(a);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(fg[i][j] != 'W')
            {
                w[i]++;
            }
            if(fg[i][j] != 'B')
            {
                b[i]++;
            }
            if(fg[i][j] != 'R')
            {
                r[i]++;
            }
        }
    }
    int ans = 0x3f3f3f;
    for(int i = 0; i <= n - 3; i++)
    {
        for(int j = i + 1; j <= n - 2; j++)
        {
            int current_cost = 0;
            for (int k = 0; k <= i; k++)
            {
                current_cost += w[k];
            }
            for (int k = i + 1; k <= j; k++)
            {
                current_cost += b[k];
            }
            for (int k = j + 1; k < n; k++)
            {
                current_cost += r[k];
            }
            if (current_cost < ans)
            {
                ans = current_cost;
            }
        }
    }
    cout << ans;
}
