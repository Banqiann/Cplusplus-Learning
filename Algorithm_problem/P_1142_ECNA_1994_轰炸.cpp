#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

vector<pair<int , int>> dot;
int n;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    dot.push_back({0 , 0});
    for(int i = 1; i <= n; i++)
    {
        int x , y; cin >> x >> y;
        dot.push_back({x , y});
    }
    int ans = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = i + 1; j <= n; j++)
        {
            int cnt = 0;
            for(int k = 1; k <= n; k++)
            {
                if ((dot[j].second - dot[i].second) * (dot[k].first - dot[i].first) == (dot[k].second - dot[i].second) * (dot[j].first - dot[i].first))
                {
                    cnt++;
                }
                ans = max(cnt , ans);
            }
        }
    }
    cout << ans;
}
