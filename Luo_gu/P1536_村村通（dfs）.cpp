#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int MAXN = 1005;
vector<int> g[MAXN]; // 邻接表：g[u] 存储与城镇 u 直接相连的所有邻居
bool vis[MAXN];      // 访问标记数组：记录城镇是否已经被访问过

// 深度优先搜索（DFS）：通过递归把整个连通块的所有节点全部打上访问标记
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
    
    int n, m;
    // 读入城镇数 n，当读到 n 为 0 时结束输入
    while(cin >> n && n != 0)
    {
        cin >> m; // 读入已有的道路数
        
        // 多组测试数据，每次都要清空上一轮的图和访问标记
        for(int i = 1; i <= n; i++)
        {
            g[i].clear();
            vis[i] = false;
        }
        
        // 读入每一条道路，建立无向图（双向添加进通讯录）
        for(int i = 0; i < m; i++)
        {
            int u , v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        
        int count = 0; // 统计连通块的数量
        for(int i = 1; i <= n; i++)
        {
            if(vis[i] == false)
            {
                count++;
                dfs(i);
            }
        }
        
        // 要将 count 个独立的连通块全部连通，最少需要修建 count - 1 条道路
        cout << count - 1 << endl;
    }
    
    return 0;
}
