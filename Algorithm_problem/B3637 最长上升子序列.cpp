#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    vector<int> nums(num);
    vector<int> f(num,1);
    for(int i = 0; i < num ; i++)
    {
        cin >> nums[i];
    }
    int ans = 1;
    for(int i = 0; i < num ; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(nums[i] > nums[j])
            {
                f[i] = max(f[i] , f[j] + 1);
            }
        }
        ans = max(ans, f[i]);
    }
    cout << ans;
}