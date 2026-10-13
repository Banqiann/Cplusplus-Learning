#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int x , y;              // y 小 ; x 大
int ans = 0;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> x >> y;
    while(y != 0 && x != 0)
    {
        if(x < y)
        {
            swap(x , y);
        }
        ans += (x / y) * y * 4;
        x %= y;
    }
    cout << ans;
}
