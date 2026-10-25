#include <bits/stdc++.h>
using namespace std;
#define int long long

int l = 1; int r = 1e9;
int mid = (l + r) / 2;
int res;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << mid << endl;
    cin >> res;
    while(res != 0)
    {
        if(res == -1)
        {
            l = mid + 1;
        }
        else if(res == 1)
        {
            r = mid - 1;
        }
        mid = (l + r) / 2;
        cout << mid << endl;
        cin >> res;
    }
}
