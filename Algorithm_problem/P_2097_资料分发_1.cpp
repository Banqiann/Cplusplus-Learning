#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int MAXN = 1e5 + 5;
int f[MAXN];
set<int> st;
int ans = 0;

int find(int x)
{
    if(f[x] == x)
    {
        return x;
    }
    return f[x] = find(f[x]);
}

void merge(int x , int y)
{
    int rootx = find(x);
    int rooty = find(y);
    if(rootx != rooty)
    {
        f[rootx] = rooty;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++)
    {
        f[i] = i;
    }

    for(int i = 0; i < m; i++)
    {
        int a , b;
        cin >> a >> b;
        merge(a , b);
    }
    for(int i = 1; i <= n; i++)
    {
        if(st.count( find(f[i]) )  == 0 )
        {
            ans++;
            st.insert(find(f[i]));
        }
    }
    cout << ans;
}
