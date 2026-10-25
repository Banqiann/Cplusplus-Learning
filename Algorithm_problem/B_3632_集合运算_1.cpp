#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int a_l , b_l;
vector<int> a , b;
map<int , int> mp;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> a_l;
    for(int i = 0; i < a_l; i++)
    {
        int x; cin >> x;
        a.push_back(x);
    }
    cin >> b_l;
    for(int i = 0; i < b_l; i++)
    {
        int x; cin >> x;
        b.push_back(x);
    }
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
    //第一步
    cout << a_l << endl;
    //第二步
    if(a_l == 0 || b_l == 0)
    {
        cout << endl;
    }
    else
    {
        for(int i = 0; i < a_l; i++)
        {
            auto it = find(b.begin() , b.end() , a[i]);
            if(it != b.end())
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    //第三步
    if(a_l == 0 && b_l == 0)
    {
        cout << endl;
    }
    else
    {
        for(int i = 0; i < a_l; i++)
        {
            mp[a[i]]++;
        }
        for(int i = 0; i < b_l; i++)
        {
            mp[b[i]]++;
        }
        for(auto p : mp)
        {
            cout << p.first << " ";
        }
    }
}
