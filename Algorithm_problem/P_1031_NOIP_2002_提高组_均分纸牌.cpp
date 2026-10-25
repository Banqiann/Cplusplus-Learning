#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

vector<int> cards;
int n;
int ans = 0;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    int num = 0;
    for(int i = 0; i < n; i++)
    {
        int rub;
        cin >> rub;
        num += rub;
        cards.push_back(rub);
    }
    num /= n;                   // num 现在是 每堆牌该有的牌数
    for(int i = 0; i < n - 1; i++)
    {
        if(cards[i] != num)
        {
            ans += 1;
            if(cards[i] > num)
            {
                cards[i + 1] += (cards[i] - num);
            }
            else
            {
                cards[i + 1] -= (num - cards[i]);
            }
            cards[i] = num;
        }
    }
    cout << ans;
}