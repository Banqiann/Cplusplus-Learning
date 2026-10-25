#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int a , b , n;
int rt = 0;
int rn = 0;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> a >> b >> n;
    if(n <= (a + b))
    {
        cout << 0;
        return 0;
    }
    n -= (a + b);
    int g = (n / (5 * a + 3 * b));
    rn = n - g * (5 * a + 3 * b);
    if(rn == 0)
    {
        rt += 0;
    }
    else if(rn > 0 && rn <= a)
    {
        rt += 3;
    }
    else if(rn > a && rn <= a + b)
    {
        rt += 5;
    }
    else if(rn > a + b && rn <= 2 * a + b)
    {
        rt += 6;
    }
    else if(rn > 2 * a + b && rn <= 3 * a + b)
    {
        rt += 9;
    }
    else if(rn > 3 * a + b && rn <= 3 * a + 2 * b)
    {
        rt += 10;
    }
    else if(rn > 3 * a + 2 * b && rn <= 4 * a + 2 * b)
    {
        rt += 12;
    }
    else
    {
        rt += 15;
    }
    cout << g * 15 + rt;
}
