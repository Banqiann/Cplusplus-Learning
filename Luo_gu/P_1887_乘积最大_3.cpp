#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

vector<int> ans;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , m;                  //把 n  ， 分成 m 份
    int basic = 0;
    int cha = 0;
    cin >> n >> m;
    for(int i = n; i > 0; i--)
    {
        if(i % m == 0)
        {
            basic = i;
            basic /= m;
            break;
        }
    }
    cha = n - m * basic;
    for(int i = 0; i < m; i++)
    {
        ans.push_back(basic);
    }
    int i = m - 1;
    while(cha > 0)
    {
        ans[i]++;
        i--;
        cha--;
    }
    for(auto x : ans)
    {
        cout << x << " ";
    }
}