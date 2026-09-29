#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int MAXN = 2e5 + 5;
int f[MAXN];

int find(int x)             //找到根节点
{
    if(f[x] == x)           //自己就是根节点 ， 直接把节点传回去
    {
        return x;
    }
    return f[x] = find(f[x]);       //传回根节点，并且让f[x]指向根节点
}

void merge(int x , int y)   //合并两个集合
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
    for(int i = 1; i <= n; i++)             //初始化
    {
        f[i] = i;
    }
    for(int i = 0; i < m; i++)
    {
        int z , x , y;
        cin >> z >> x >> y;
        if(z == 1)
        {
            merge(find(x) , find(y));
        }
        else
        {
            if(find(x) == find(y))
            {
                cout << "Y" << endl; 
            }
            else
            {
                cout << "N" << endl;
            }
        }
    }
}
