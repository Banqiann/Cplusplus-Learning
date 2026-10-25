#include <bits/stdc++.h>
using namespace std;
#define int long long

int p;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> p;
    if(p == 1)
    {
        int num;
        cin >> num;
        for(int i = 2; i <= 9; i++)
        {
            if(num % i == 0)
            {
                cout << num / i << " " << i << endl; 
                return 0;
            }
        }
    }
    else if(p == 2)
    {
        int a , b;
        cin >> a >> b;
        cout << a * b;
    }
}
