#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

vector<int> sequence;
int ans = 0;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int rub;
    while(cin >> rub)
    {
        sequence.push_back(rub);
    }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(sequence[j] > sequence[j + 1])
            {
                swap(sequence[j + 1] , sequence[j]);
                ans++;
            }
        }
    }
    cout << ans;
}