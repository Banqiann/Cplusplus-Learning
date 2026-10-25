#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

vector<int> road;
vector<int> lo;
bool flag;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    for(int p = 0; p < t; p++)
    {
        road.clear();
        lo.clear();
        int n , k; cin >> n >> k;
        for(int i = 0; i < n; i++)
        {
            int rub; cin >> rub; lo.push_back(rub);
        }
        for(int i = 0; i < n - 1; i++)
        {
            road.push_back(k);
        }
        if(lo.front() > k || lo.back() > k)         //特判一下首尾的路行不行
        {
            cout << "NO" << endl;
            continue;
        }
        flag = true;
        for(int i = 0; i <= n - 2; i++)
        {
            road[i] -= lo[i];
            if(road[i] < 0)
            {
                flag = false;
                break;
            }
            lo[i + 1] = max(0ll , lo[i + 1] - road[i]);
        }
        if(lo[n - 1] > 0)
        {
            flag = false;
        }
        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
