#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int MAXN = 2e5 + 5;
int n;
vector<int> p;
int ad[MAXN];
map<int , int> mp;
int max_ans = 0;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    p.push_back(0);
    mp[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        int rub; cin >> rub;
        if(rub == 0)
        {
            p.push_back(-1);
        }
        else
        {
            p.push_back(1);
        }
    }
    for(int i = 1; i <= n; i++)
    {
        ad[i] = ad[i - 1] + p[i];
    }
    for(int i = 1; i <= n; i++)
    {
        if(mp.count(ad[i]) == 0)
        {
            mp[ad[i]] = i;
        }
        else
        {
            max_ans = max(max_ans , i - mp[ad[i]]);
        }
    }
    cout << max_ans;
}
