#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n;
int ans = 0;
map<int , int> mp;

int dn(int n)
{
    if(n >= 1 && n < 3)
    {
        return 1;
    }
    if(n >= 3 && n < 7)
    {
        return 3;
    }
    if(n >= 7 && n < 30)
    {
        return 7;
    }
    if(n >= 30 && n < 120)
    {
        return 30;
    }
    if(n >= 120 && n < 365)
    {
        return 120;
    }
    if(n >= 365)
    {
        return 365;
    }
}

int cur = 0;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    int r1 , r2 , r3 , r4 , r5 , r6;
    cin >> r1 >> r2 >> r3 >> r4 >> r5 >> r6;
    mp[1] = r1; mp[3] = r2; mp[7] = r3; mp[30] = r4; mp[120] = r5; mp[365] = r6;
    for(int i = 1; i <= n; i++)
    {
        int day; cin >> day;
        if(day == 1)
        {
            cur++;
            ans += mp[dn(cur)];
        }
        else
        {
            cur = 0;
        }
    }
    cout << ans;
}
