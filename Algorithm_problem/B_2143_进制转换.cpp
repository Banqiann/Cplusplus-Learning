#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x , m;
    cin >> x >> m;
    string map = "0123456789ABCDEF";
    string ans = "";
    while(x > 0)
    {
        int t = x % m;
        x /= m;
        ans += map[t];
    }
    reverse(ans.begin() , ans.end());
    cout << ans;
}