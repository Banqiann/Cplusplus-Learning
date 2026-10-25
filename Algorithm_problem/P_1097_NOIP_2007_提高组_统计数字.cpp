#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n;
map<int , int> mp;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int rub;
        cin >> rub;
        mp[rub]++;
    }
    for (auto p : mp)
    {
        cout << p.first << " " << p.second << endl;
    }
}
