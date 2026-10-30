#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n , x;
// 小根堆
priority_queue<int , vector<int> , greater<int>> q2;        //接下来我们保证q1 永远比 q2 多一个或者相等
// 大根堆
priority_queue<int , vector<int>> q1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        if(q1.empty() || x <= q1.top())
        {
            q1.push(x);
        }
        else
        {
            q2.push(x);
        }
        if(q1.size() < q2.size())
        {
            q1.push(q2.top());
            q2.pop();
        }
        else if(q1.size() > q2.size() + 1)
        {
            q2.push(q1.top());
            q1.pop();
        }
        if(i % 2 == 1)
        {
            cout << q1.top() << endl;
        }
    }
}
