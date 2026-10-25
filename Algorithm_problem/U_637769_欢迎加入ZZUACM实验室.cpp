#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n;
vector<int> x_point;
vector<int> y_point;


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    if(n == 1)
    {
        cout << "YES";
        return 0;
    }
    for(int i = 0; i < 2 * n; i++)
    {
        int rub1 , rub2;
        cin >> rub1 >> rub2;
        if(rub1 == 0)
        {
            y_point.push_back(rub2);
        }
        else
        {
            x_point.push_back(rub1);
        }
    }
    sort(x_point.begin() , x_point.end());
    sort(y_point.begin() , y_point.end());
    if(x_point.size() != y_point.size() && !x_point.empty() && !y_point.empty())
    {
        cout << "NO";
        return 0;
    }
    if(y_point.empty())
    {
        int mid = (x_point[0] + x_point[2 * n - 1]);
        for(int i = 1; i < n; i++)
        {
            if((x_point[i] + x_point[2 * n - 1 - i]) != mid)
            {
                cout << "NO";
                return 0;
            } 
        }
        cout << "YES";
        return 0;
    }

    if(x_point.empty())
    {
        int mid = (y_point[0] + y_point[2 * n - 1]);
        for(int i = 1; i < n; i++)
        {
            if((y_point[i] + y_point[2 * n - 1 - i]) != mid)
            {
                cout << "NO";
                return 0;
            } 
        }
        cout << "YES";
        return 0;
    }
    //以上做完特判，接下来考虑x,y轴上点均匀分布的一般情况
    for(int i = 0; i < n; i++)
    {
        if(x_point[i] != y_point[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
