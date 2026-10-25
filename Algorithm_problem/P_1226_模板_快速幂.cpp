#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a , b , mod;
    cin >> a >> b >> mod;
    int original_a = a, original_b = b;
    int ans = 1;
    while(b > 0)
    {
        a %= mod;
        if(b % 2 == 1)
        {
            ans = ans * a % mod;
        }
        a = a * a % mod;
        b /= 2;
    }
    cout << original_a << '^' << original_b << " mod " << mod << '=' << ans;
}