#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n;
vector<int> maze;
void loc(int a , int b)
{
    if(abs(b - a) > 3)
    {
       maze[(a + b) / 2] = 1;
       loc(a , (a + b) / 2);
       loc((a + b) / 2 , b); 
    }
}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 0; i <= n; i++)
    {
        maze.push_back(0);
    }
    maze[1] = 1;
    if(n == 2)
    {
        cout << "10";
        return 0;
    }
    maze[n] = 1;
    loc(1 , n);
    for(int i = 1; i <= n; i++)
    {
        cout << maze[i];
    }
}
