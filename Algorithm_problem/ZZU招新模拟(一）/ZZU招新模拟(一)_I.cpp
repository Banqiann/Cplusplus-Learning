#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int MAXN = 2e5 + 5; 
int ans[MAXN];
int n , q;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> q;
    for(int i = 1; i <= n; i++)
    {
        int rub; cin >> rub;
        ans[i] = ans[i - 1] + rub;
    }
    for(int i = 0; i < q; i++)
    {
        int l , r;
        cin >> l >> r;
        cout << ans[r] - ans[l - 1] << endl; 
    }
}
