#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int MAXN = 1e5 + 5;
vector<int> edge[MAXN];
int in_degree[MAXN];            // 入度
int ans[MAXN];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , m;
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++)
    {
        int u , v;
        cin >> u >> v;
        edge[u].push_back(v);
        in_degree[v]++;
    }
    queue<int> q;
    for(int i = 1; i <= n; i++)
    {
        ans[i] = 1;
        if(in_degree[i] == 0)
        {
            q.push(i);
        }
    }
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i = 0; i < edge[u].size(); i++)
        {
            int v = edge[u][i];
            ans[v] = max(ans[v] , ans[u] + 1);
            in_degree[v]--;
            if(in_degree[v] == 0)
            {
                q.push(v);

            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        cout << ans[i] << endl;
    }
}
