#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

long long qpow(long long j, long long i)
{
    long long res = 1;
    while(i>0){
        if(i & 1) res *= j;
        j *= j;
        i >>= 1;
    }
    return res;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int max = 1;
    for(int i = 1; i * i < n; i++)  //底数
    {
        for(int j = 2; j < n; j++)
        {
            if(qpow(i , j) < n && qpow(i , j) > max)
            {
                max = qpow(i , j);
            }
        }
    }
    cout << max;
}