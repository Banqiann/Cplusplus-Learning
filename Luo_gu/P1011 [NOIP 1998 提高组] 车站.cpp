#include<bits/stdc++.h>
using namespace std;

vector<int> num = {0 , 1 , 1};
void fib()
{
    for(int j = 3 ; j <= 20 ; j++)
    {
        num.push_back(num[j-1] + num[j - 2]);
    }
}

int a_xishu(int n)
{
    int t = 0;
    if(n == 1 || n == 2)
    {
        return 1;
    }
    if(n == 3 || n == 4)
    {
        return 2;
    }
    if(n == 5)
    {
        return 3;
    }
    for(int j = 2; j <= n - 4; j++ )
    {
        t += num[j];
    }
    return t + 3;
}

int p_xishu(int n)
{
    int t = 0;
    if(n == 1 || n == 2 || n == 3)
    {
        return 0;
    }
    if(n == 4)
    {
        return 1;
    }
    for(int i = 1; i <= n - 3; i++)
    {
        t += num[i];
    }
    return t;
}
 
int main()
{
    fib();
    int a = 0 , n = 0 , m = 0 , x = 0 ; 
    cin >> a >> n >> m >> x ; 
    if(n == 1 || n == 2 || n == 3)
    {
        cout <<  a;
        return 0;
    }
    if(n == 4)
    {
        if(x == 3)
        {
            cout << 2 * a;
            return 0;
        }
        else
        {
            cout << a;
            return 0;
        }
    }
    if(x == 1 || x == 2)
    {
        cout << a ;
        return 0;
    }
    else if(x == 3)
    {
        cout << 2 * a ;
        return 0;
    }                //把 1 <= n <= 4 不符合通项的部分穷举

    int p = (m - a_xishu(n - 1) * a ) / p_xishu(n - 1);
    cout << a_xishu(x) * a + p_xishu(x) * p;
    return 0;
}