#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

string n;
int k;
int tot = 0;
int cnt[15];
vector<int> g[15];
bool vis[15];

void dfs(int u)
{
    tot++;
    vis[u] = true;
    for(int v : g[u])
    {
        if(!vis[v])
        {
            dfs(v);
        }
    }
}

void print(__int128 x)
{
    if(x > 9)
    {
        print(x / 10);
    }
    cout << (int)(x % 10);
}

void clean()
{
    for(int i = 0 ; i <= 9; i++)
    {
        vis[i] = false;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;

    for(int i = 0; i < k; i++)
    {
        int u , v;
        cin >> u >> v;
        g[u].push_back(v);
    }

    for(int i = 0; i <= 9 ; i++)
    {
        clean();
        tot = 0;
        dfs(i);
        cnt[i] = tot;
    }

    __int128 ans = 1;
    for(int i = 0; i < n.size(); i++)
    {
        int dight = n[i] - '0';
        ans = ans * cnt[dight];
    }
    print(ans);
}
