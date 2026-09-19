#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

map<char , char> mp;
map<char , bool> vis;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a , b, c;
    cin >> a >> b >> c;
    for(int i = 0; i < a.size(); i++)
    {
        if(vis[b[i]] && mp[a[i]] != b[i])   //记录过而且对不上
        {
            cout << "Failed";
            return 0;
        }
        else                                //没记录过就记录了，记录了重复记录相同结果也无所谓
        {
            mp[a[i]] = b[i];
            vis[b[i]] = true;
        }
    }
    for(char i='A';i<='Z';i++)
    {
        if(!vis[i])
        {
            cout << "Failed";
            return 0;
        }
     }
	for(int i=0;i<c.size();i++)
    {
     cout<<mp[c[i]];
    }
}