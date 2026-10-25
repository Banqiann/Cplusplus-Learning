#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

double p0 , a , b;
double p1;          //打折券
double p2;             //满减券
double k;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> p0 >> k >> a >> b;
    p1 = p0 * k;
    if(p0 >= a)
    {
        p2 = p0 - b;
    }
    else
    {
        p2 = (a - b);
    }
    cout << fixed << setprecision(2) << min(p1 , p2) << endl;
}
