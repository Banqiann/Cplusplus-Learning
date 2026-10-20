#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n , m;
int ans = 0;
vector<int> head;   //下标为 i
vector<int> coin;   //下标为 j

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    if(m < n)
    {
        cout << "you died!";
        return 0;
    }
    for(int i = 0; i < n; i++)
    {
        int rub; cin >> rub;
        head.push_back(rub);
    }
    for(int i = 0; i < m; i++)
    {
        int rub; cin >> rub;
        coin.push_back(rub);
    }
    sort(head.begin() , head.end());
    sort(coin.begin() , coin.end());
    int i = 0; int j = 0;
    while(j < coin.size() && i < head.size())
    {
        if(coin[j] >= head[i])
        {
            ans += coin[j];
            i++; j++;
        }
        else
        {
            j++;
        }
    }
    if(i == head.size())
    {
        cout << ans;
    }
    else
    {
        cout << "you died!"; 
    }
}
