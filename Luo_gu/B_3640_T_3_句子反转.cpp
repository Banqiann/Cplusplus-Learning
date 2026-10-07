#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

stack<string> st;

string rev(string rub)
{
    string ans = "";
    char x = rub[0];
    if( (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z') )
    {
        for(char x : rub)
        {
            x ^= 32;
            ans += x;
        }
    }
    else
    {
        reverse(rub.begin() , rub.end());
        ans = rub;
    }
    return ans;
}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string rub;
    while(cin >> rub)
    {
        string r;
        st.push( rev(rub) );
    }
    while(st.empty() == false)
    {
        cout << st.top() << " ";
        st.pop();
    }
}
