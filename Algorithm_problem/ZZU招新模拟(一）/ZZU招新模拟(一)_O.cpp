#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

string f; string s;
bool flag = true;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //第一次
    cin >> f >> s;
    if(f.size() != 3 || (f[0]) != 'V' || (f[1]) != 'O' || (f[2]) != 'Y')
    {
        flag = false;
    }
    if(s.size() != 3 || (s[0]) != 'H' || (s[1]) != 'U' || (s[2]) != 'A')
    {
        flag = false;
    }
    int a1; cin >> a1;
    if(a1 != 1)
    {
        flag = false;
    }
    cin >> a1;
    if(a1 != 0)
    {
        flag = false;
    }
    int x; cin >> x;
    cin >> a1;
    if(a1 != 0)
    {
        flag = false;
    }
    //第二次
    cin >> f >> s;
    if(f.size() != 3 || (f[0]) != 'H' || (f[1]) != 'U' || (f[2]) != 'A')
    {
        flag = false;
    }
    if(s.size() != 3 || (s[0]) != 'V' || (s[1]) != 'O' || (s[2]) != 'Y')
    {
        flag = false;
    }
    cin >> a1;
    if(a1 != 1)
    {
        flag = false;
    }
    cin >> a1;
    if(a1 != 1)
    {
        flag = false;
    }
    int y; cin >> y;
    cin >> a1;
    if(a1 != (x + 1))
    {
        flag = false;
    }
    //第三次
    cin >> f >> s;
    if(f.size() != 3 || (f[0]) != 'V' || (f[1]) != 'O' || (f[2]) != 'Y')
    {
        flag = false;
    }
    if(s.size() != 3 || (s[0]) != 'H' || (s[1]) != 'U' || (s[2]) != 'A')
    {
        flag = false;
    }
    cin >> a1;
    if(a1 != 0)
    {
        flag = false;
    }
    cin >> a1;
    if(a1 != 1)
    {
        flag = false;
    }
    cin >> a1;
    if(a1 != (x + 1))
    {
        flag = false;
    }
    cin >> a1;
    if(a1 != (y + 1))
    {
        flag = false;
    }
    if(flag == false)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}
