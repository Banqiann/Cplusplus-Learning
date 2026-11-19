#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n , m;			 // 论文数 , 课题数
int a[25]; int b[25];
int dp[25][205];     // 用前 i 个课题 , 完成 j 篇论文的最少耗时

int qpow(int a , int b)
{
	int res = 1;
	while(b > 0)
	{
		if(b % 2 == 1)
		{
			res = res * a;
		}
		a = a * a;
		b /= 2;
	}
	return res;
}

signed main()
{
	memset(dp, 0x3f, sizeof(dp));
	dp[0][0] = 0;
	cin >> n >> m;		
	for(int i = 1; i <= m; i++)
	{
		cin >> a[i] >> b[i];
	}
	for(int i = 1; i <= m; i++)			//	 课题
	{
		for(int j = 0; j <= n; j++)		// 	 论文
		{
			for(int k = 0; k <= j; k++)		// 当前 i 扫到的课题 , 做多少论文	
			{
				dp[i][j] = min(dp[i - 1][j - k] + a[i] * qpow(k , b[i]) , dp[i][j]);
			}
		}
	}
	cout << dp[m][n];
}
