#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

struct patient
{
    int q;
    string id;
    int age;
};

int n;
vector<patient> po;
vector<patient> py;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        string a; int b ; cin >> a >> b;
        if(b >= 60)
        {
            po.push_back({i , a , b});
        }
        else
        {
            py.push_back({i , a , b});
        }
    }
    sort(po.begin() , po.end() , [](const patient &a , const patient & b)
    {
        if(a.age != b.age)
        {
            return a.age > b.age;
        }
        return a.q < b.q;
    });
    sort(py.begin() , py.end() , [](const patient &a , const patient & b)
    {
        return a.q < b.q;
    });
    for(patient x : po)
    {
        cout << x.id << endl;
    }
    for(patient x : py)
    {
        cout << x.id << endl;
    }
}
