#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main()
{
    int N;
    cin >> N;
    vector<string> num;
    for(int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        num.push_back(s);
    }
    sort(num.begin(), num.end(), [](const string& a, const string& b) {
        return a + b > b + a;
    });
    for (const string& s : num)
        cout << s;
    cout << endl;
}