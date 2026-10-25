#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main()
{
    int n;
    int a , b;
    cin >> n;
    int sum = 0;
    priority_queue<int , vector<int> , greater<int>> num;
    for(int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        num.push(t);
    }
    while(num.size() > 1)
    {
        a = num.top();
        num.pop();
        b = num.top();
        num.pop();
        num.push(a + b);
        sum += (a + b);
    }
    cout << sum;

}