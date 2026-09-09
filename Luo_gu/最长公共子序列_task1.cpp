#include <bits/stdc++.h>
using namespace std;

const int MAXN = 5005;
int f[MAXN][MAXN];

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    if(s1.back() == '.')
    {
        s1.pop_back();
    }
    if(s2.back() == '.')
    {
        s2.pop_back();
    }
    int n = s1.size();
    int m = s2.size();
    for(int i = 0; i <= n; i++)
    {
        f[i][0] == 0;
    }
    for(int j = 0; j <= m; j++)
    {
        f[0][j] == 0;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(s1[i - 1] == s2[j - 1])
            {
                f[i][j] = f[i-1][j-1] + 1;
            }
            else
            {
                f[i][j] = max(f[i - 1][j],f[i][j - 1]);
            }
        }
    }
    cout << f[n][m] << "\n";
}