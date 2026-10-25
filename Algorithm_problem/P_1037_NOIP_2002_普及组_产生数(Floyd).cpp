#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

string n;
int k;
bool vis[15][15];
int cnt[15];

void print(__int128 x)
{
    if(x > 9)
    {
        print(x / 10);
    }
    cout << (int)(x % 10);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    for (int i = 0; i <= 9; i++)
    {
        vis[i][i] = true;
    }
    for(int i = 0; i < k; i++)
    {
        int u , v;
        cin >> u >> v;
        vis[u][v] = true;
    }
    for(int mid = 0; mid <= 9; mid++)
    {
        for(int i = 0; i <= 9; i++)
        {
            for(int j = 0; j <= 9; j++)
            {
                if (vis[i][mid] && vis[mid][j])
                {
                    vis[i][j] = true;
                }
            }
        }
    }
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (vis[i][j])
            {
                cnt[i]++;
            }
        }
    }
    __int128 ans = 1;
    for(int i = 0; i < n.size(); i++)
    {
        int dight = n[i] - '0';
        ans = ans * cnt[dight];
    }
    print(ans);
}
