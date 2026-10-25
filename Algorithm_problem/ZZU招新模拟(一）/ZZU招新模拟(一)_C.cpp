#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n , q;
vector<int> f;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> q;
    f.push_back(0);
    for(int i = 1; i <= n; i++)
    {
        int rub; cin >> rub;
        f.push_back(rub);
    }
    while(q--)
    {
        cout << n << endl;
    }
}
