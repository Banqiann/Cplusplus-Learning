#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

string a , b;
vector<char> p , q;
int ans = 0;

char flip(char c)
{
    if (c == '*')
    {
        return 'o';
    }
    else
    {
        return '*';
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    getline(cin, a);
    stringstream ss1(a);
    char word;
    while (ss1 >> word)
    {
        p.push_back(word);
    }
    getline(cin, b);
    stringstream ss2(b);
    while (ss2 >> word)
    {
        q.push_back(word);
    }
    for(int i = 0; i < p.size() - 1; i++)
    {
        if(p[i] == q[i])
        {
            continue;
        }
        else
        {
            p[i + 1] = flip(p[i + 1]);
            ans++;
        }
    }
    cout << ans;
}
