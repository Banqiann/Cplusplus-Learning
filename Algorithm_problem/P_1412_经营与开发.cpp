#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int MAXN = 100005;
int n; double k , c , w;
int op[MAXN];          // 1 开采 ; 2 维修
double p[MAXN];        //  当前节点的能力值
double cur[MAXN];      //  当前节点对能力值的 收益/损耗

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k >> c >> w;
    p[n + 1] = 0.0;
    for(int i = 1; i <= n ; i++)
    {
        int type; cin >> type;
        if(type == 1)
        {
            op[i] = 1;
        }
        else if(type == 2)
        {
            op[i] = 2;
        }
        cin >> cur[i];
    }
    for(int i = n; i >= 1; i--)
    {
        if(op[i] == 1)
        {
            p[i] = max(p[i + 1] , cur[i] + (1.0 - 0.01 * k) * p[i + 1]);
        }
        else
        {
            p[i] = max(p[i + 1] , -1 * cur[i] + (1.0 + 0.01 * c) * p[i + 1]);
        }
    }
    cout << fixed << setprecision(2) << w * p[1];
}
