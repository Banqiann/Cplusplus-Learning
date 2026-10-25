#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int a;

int two_to_ten(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int digit = s[i] - '0'; 
        ans = ans * 2 + digit;  
    }
    return ans;
}

string ten_to_two(int n)
{
    string ans;
    if(n == 0)
    {
        return "0";
    }
    while (n > 0)
    {
        ans += to_string(n % 2); 
        n /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> a;
    string s = ten_to_two(a);
    while(s.size() < 32)
    {
        s = '0' + s;
    }
    s = s.substr(16 , 16) + s.substr(0 , 16);
    cout << two_to_ten(s);
}