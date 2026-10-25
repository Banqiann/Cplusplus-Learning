#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n;
vector<int> a;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int rub; cin >> rub;
        a.push_back(rub);
        sort(a.begin() , a.end() , greater<int>());
    }
    for(int x : a)
    {
        cout << x << " ";
    }
}
