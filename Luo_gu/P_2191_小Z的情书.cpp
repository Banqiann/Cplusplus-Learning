#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n; 
vector<pair<int , int>> loc;
vector<pair<int , int>> loc2;
vector<pair<int , int>> loc3;
vector<pair<int , int>> loc4;
vector<string> mp;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    cin.ignore(1024, '\n');
    string line;
    for(int i = 0 ; i < n; i++)
    {
        getline(cin , line);
        for(int j = 0 ; j < n; j++)
        {
            if(line[j] == 'O')
            {
                loc.push_back({i , j});
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        string rub; cin >> rub;
        mp.push_back(rub);
    }
    for(auto item : loc)
    {
        cout << mp[item.first][item.second];
    }
    for(auto item : loc)
    {
        int a = item.first;
        int b = item.second;
        item.second = n - 1 - a;
        item.first = b;
        loc2.push_back({item.first , item.second});
    }
    sort(loc2.begin() , loc2.end());
        for(auto item : loc2)
    {
        cout << mp[item.first][item.second];
    }
    for(auto item : loc2)
    {
        int a = item.first;
        int b = item.second;
        loc3.push_back({b, n - 1 - a});
    }
    sort(loc3.begin(), loc3.end());
    for(auto item : loc3)
    {
        cout << mp[item.first][item.second];
    }
    // 第四次
    for(auto item : loc3)
    {
        int a = item.first;
        int b = item.second;
        loc4.push_back({b, n - 1 - a});
    }
    sort(loc4.begin(), loc4.end());
    for(auto item : loc4)
    {
        cout << mp[item.first][item.second];
    }
}
