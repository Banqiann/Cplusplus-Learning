#include <bits/stdc++.h>
using namespace std;
#define int long long

int d1;
int d2;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "? 1000 1000" << endl;
    cin >> d1;
    cout << "? -1000 1000" << endl;
    cin >> d2;
    int x = (d2 - d1) / 2;
    int y = (4000 - d2 - d1) / 2;
    cout << "! " << x << " " << y << endl;
}
