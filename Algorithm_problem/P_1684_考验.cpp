#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n;
set<int> st;
int ans = 0;
int pairs = 0;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int rub; cin >> rub;
        if(st.count(rub) == 0)
        {
            st.insert(rub);
        }
        else
        {
            pairs++;
            st.erase(rub);
        }
        if(pairs == 2)
        {
            ans++;
            pairs = 0;
            st.clear();
        }
    }
    cout << ans;
}
