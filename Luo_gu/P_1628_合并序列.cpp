#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

vector<string> str;
vector<string> ans;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string rub;
        cin >> rub;
        str.push_back(rub);
    }
    string pre;
    cin >> pre;
    int len = pre.size();
    for(int i = 0; i < n; i++)
    {
        if(str[i].substr(0 , len) == pre)
        {
            ans.push_back(str[i]);
        }
    }
    sort(ans.begin() , ans.end() , less<string>());
    for(auto i : ans)
    {
        cout << i << endl;
    }
}