#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n , q;
map<int , int> bottle;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int rub; cin >> rub;
        bottle[rub] = i;
    }
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        int rub; cin >> rub;
        if(bottle.count(rub) == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << bottle[rub] << endl;
        }
    }
}
