#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int MAXN = 1005;
int n , m;
int u , v , w;
vector<pair<int , int>> g1[MAXN];       // 正向图
vector<pair<int , int>> g2[MAXN];       // 反向图
int dist1[MAXN];
int dist2[MAXN];

void dijkstra(int s , vector<pair<int , int>> g[] , int dist[])
{
    for(int i = 1; i <= n; i++)
    {
        dist[i] = 0x3f3f3f;
    }
    dist[s] = 0;
    priority_queue<pair<int , int> , vector<pair<int , int>> , greater<pair<int , int>>> pq;
    pq.push({0 , s});
    while(!pq.empty())
    {
        pair<int , int> cur = pq.top();
        pq.pop();
        int d = cur.first;              // 到达当前点的累计时间
        int u = cur.second;             // 当前点的编号
        if(d > dist[u])
        {
            continue;
        }
        for(int i = 0; i < g[u].size(); i++)    //把 u 连接的每个节点都判断一遍
        {
            int to = g[u][i].first;         //下一个点 名字
            int weight = g[u][i].second;    //下一个点 边权
            if(dist[u] + weight < dist[to])
            {
                dist[to] = dist[u] + weight;
                pq.push({dist[to] , to});
            }
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        cin >> u >> v >> w;
        g1[u].push_back({v , w});
        g2[v].push_back({u , w});
    }
    dijkstra(1 , g1 , dist1);
    dijkstra(1 , g2 , dist2);
    int ans = 0;
    for(int i = 2; i <= n; i++)
    {
        ans += dist1[i] + dist2[i];
    }
    cout << ans;
}
