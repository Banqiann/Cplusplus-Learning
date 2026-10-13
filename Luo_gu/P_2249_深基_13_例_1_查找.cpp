#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n , m;
vector<int> num;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        int rub; cin >> rub;
        num.push_back(rub);
    }
    for(int i = 0; i < m; i++)
    {
        int f; cin >> f;
        int loc = lower_bound(num.begin() , num.end() , f) - num.begin();
        if(loc != num.size() && num[loc] == f)
        {
            cout << loc + 1 << " ";
        }
        else
        {
            cout << -1 << " ";
        }
    }
}
