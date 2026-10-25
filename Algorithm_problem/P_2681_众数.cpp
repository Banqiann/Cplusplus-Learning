#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n , m;
int flag , x , y;
map<int, int> mp;
int nums[1005];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> nums[i];
    }
    for(int i = 0; i < m; i++)
    {
        mp.clear();
        cin >> flag >> x >> y;
        if(flag == 1)
        {
            nums[x] = y;
        }
        else
        {
            for(int j = x; j <= y; j++)
            {
                mp[nums[j]]++;
            }
            int maxn = -0x3f3f3f;
            int pos = x;
            for(auto p : mp)
            {
                if(p.second > maxn)
                {
                    maxn = p.second;
                    pos = p.first;
                }
            }
            cout << pos << endl;
        }
    }
}
