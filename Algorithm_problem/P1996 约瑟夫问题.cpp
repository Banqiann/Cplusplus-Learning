#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    queue<int> q;
    for(int i = 1; i <= n; i++)
    {
        q.push(i);
    }

    while(!q.empty())
    {
        // 前 m - 1 个人重新排到队尾
        for(int i = 1; i < m; i++)
        {
            q.push(q.front());
            q.pop();
        }

        // 第 m 个人出圈输出
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;
    return 0;
}
