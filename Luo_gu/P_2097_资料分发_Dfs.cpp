#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int MAXN = 1e5 + 5;
int m , n;
vector<int> g[MAXN];
bool vis[MAXN];

void dfs(int u)
{
    vis[u] = true;
    for(int v : g[u])
    {
        if(!vis[v])
        {
            dfs(v);
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int u , v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            count++;
            dfs(i);
        }
    }
    cout << count;
}
