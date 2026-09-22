#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

string rub;
string fine;
bool pluss = false;
string a , b , c;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char ch;
    while(cin >> ch)
    {
        fine.push_back(ch);
        if(ch == '+')
        {
            pluss = true;
        }
    }
    int loc1;
    if(pluss)
    {
        loc1 = fine.find("+");
    }
    else
    {
        loc1 = fine.find("-");
    }
    int loc2 = fine.find("=");
    // 把数字或者问号取出
    a = fine.substr(0 , loc1);
    b = fine.substr(loc1 + 1 , loc2 - loc1 - 1);
    c = fine.substr(loc2 + 1);
    if(pluss)
    {
        // 算式为：a + b = c
        if(a == "?")
        {
            cout << stoll(c) - stoll(b);
        }
        else if(b == "?")
        {
            cout << stoll(c) - stoll(a);
        }
        else if(c == "?")
        {
            cout << stoll(a) + stoll(b);
        }
    }
    else
    {
        // 算式为：a - b = c
        if(a == "?")
        {
            cout << stoll(c) + stoll(b);
        }
        else if(b == "?")
        {
            cout << stoll(a) - stoll(c);
        }
        else if(c == "?")
        {
            cout << stoll(a) - stoll(b);
        }
    }
}