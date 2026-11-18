#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n , l , r;
int a[45];
int dp[305];
int ans;

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> l >> r;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	dp[0] = 1;
	for(int i = 1; i <= n; i++)
	{
		for(int j = r; j >= a[i]; j--)
		{
			dp[j] += dp[j - a[i]];
		}
	}
	for(int i = l; i <= r; i++)
	{
		ans += dp[i];
	}
	cout << ans;
}
