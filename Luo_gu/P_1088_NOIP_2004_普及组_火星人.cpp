#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

vector<int> a;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        int rub;
        cin >> rub;
        a.push_back(rub);
    }
    for(int i = 0; i < m; i++)
    {
        next_permutation(a.begin() , a.end());
    }
    for(int x : a)
    {
        cout << x << " ";
    }
}
