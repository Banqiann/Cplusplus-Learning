#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int a , m;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> a >> m;
    if(4 * a >= m)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
