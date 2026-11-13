#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int MAXN = 105;
int n;
int mp[MAXN][MAXN];
int s[MAXN][MAXN];
int ans = 0;

int query(int x1 ,int y1 ,int x2 ,int y2)
{
    return(s[x2][y2] - s[x1 - 1][y2] - s[x2][y1 - 1] + s[x1 - 1][y1 - 1]);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int p , q; cin >> p >> q;
        mp[p][q]++;
    }

    for(int i = 1; i <= 100; i++)
    {
        for(int j = 1; j <= 100; j++)
        {
            s[i][j] = s[i][j - 1] + s[i - 1][j] - s[i - 1][j - 1] + mp[i][j];
        }
    }

    for(int x1 = 1; x1 <= 100; x1++)
    {
        for(int y1 = 1; y1 <= 100; y1++)
        {
            for(int x2 = x1 + 1; x2 <= 100; x2++)
            {
                for(int y2 = y1 + 1; y2 <= 100; y2++)
                {
                    int cnt = 0;
                    cnt = query(x1, y1, x2, y2);
                    if(x1 + 1 <= x2 - 1 && y1 + 1 <= y2 - 1)
                    {
                        cnt -= query(x1 + 1, y1 + 1, x2 - 1, y2 - 1);
                    }
                    ans = max(ans, cnt);
                }
            }
        }
    }
    cout << ans;
}
