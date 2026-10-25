#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int N ,C;
    cin >> N >> C;
    vector<int> num;
    for(int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        num.push_back(n);
    }
    sort(num.begin() , num.end() , less<int>());
    long long ans = 0;
    for(int i = 0; i < N; i++)
    {
        int target = num[i] + C;
        int a = upper_bound(num.begin() , num.end() , target) - num.begin();
        int b = lower_bound(num.begin() , num.end() , target) - num.begin();
        ans += (a - b);
    }
    cout << ans;
}