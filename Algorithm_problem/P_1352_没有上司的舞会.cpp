#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n;
int root = 0;
const int MAXN = 6e3 + 5;
vector<int> son[MAXN];
int happy[MAXN];
bool has_boss[MAXN];
int dp[MAXN][2];

void dfs(int u)
{
    for(int x : son[u])
    {
        dfs(x);
    }
    dp[u][1] = happy[u]; dp[u][0] = 0;
    for(int i = 0; i <= 1; i++)
    {
        if(i == 0)
        {
            for(int y : son[u])
            {
                dp[u][0] += max(dp[y][0] , dp[y][1]);
            }
        }
        else
        {
            for(int y : son[u])
            {
                dp[u][1] += dp[y][0];
            }
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> happy[i];
    }
    int k , l;
    while(cin >> l >> k)
    {
        son[k].push_back(l);
        has_boss[l] = true;
    }
    for(int i = 1; i <= n; i++)
    {
        if(has_boss[i] == false)
        {
            root = i;
            break;
        }
    }
    dfs(root);
    cout << max(dp[root][0] , dp[root][1]);
}
