#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n;
int ans = 0;
int mx = 1;
vector<int> nums;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int rub;
        cin >> rub;
        nums.push_back(rub);
    }
    bool up = false;
    for(int i = 1; i < nums.size(); i++)
    {
        if(up == false)
        {
            ans = 0;
        }
        if(nums[i] - nums[i - 1] == 1)
        {
            up = true;
            if(ans == 0)
            {
                ans = 2;
            }
            else
            {
                ans += 1;
            }
        }
        else
        {
            up = false;  
        }
        if(ans > mx)
        {
            mx = ans;
        }
    }
    cout << mx;
}
