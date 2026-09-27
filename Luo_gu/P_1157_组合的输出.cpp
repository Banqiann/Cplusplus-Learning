#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

vector<int> path;
int n , r;                      //从  n 个数里抽 r 个

void dfs(int step , int last)
{
    if(step == r + 1)
    {
        for(int x : path)
        {
            cout << setw(3) << x;
        }
        cout << endl;
        return;
    }
    for(int i = last + 1; i <= n; i++)
    {
        path.push_back(i);
        dfs(step + 1 , i);
        path.pop_back();
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> r;
    dfs(1 , 0);
}