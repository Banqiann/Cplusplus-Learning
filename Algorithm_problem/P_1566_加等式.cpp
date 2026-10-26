#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int ans; int n;
vector<int> num;
const int MAXN = 1005;
int dp[MAXN];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        num.clear();
        memset(dp , 0 , sizeof(dp));
        dp[0] = 1;
        ans = 0;
        int nu; cin >> nu;
        for(int j = 0; j < nu; j++)
        {
            int rub; cin >> rub;
            num.push_back(rub);
        }
        sort(num.begin() , num.end());
        for(int j = 0 ; j < nu; j++)             // 一共有 j 个数据要判断
        {
            int val = num[j];
            ans += dp[val];                     //这里 val 是被凑出来的目标，下一行开始 val 就是加数
            for(int k = 1000; k >= val; k--)
            {
                dp[k] += dp[k - val];
            }
        }
        cout << ans << endl;
    }
}
