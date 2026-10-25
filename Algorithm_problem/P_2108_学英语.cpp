#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int flag = 1;
int ans = 0;
int cur = 0;
map<string, int> val;

void init()
{
    // 个位数与零
    val["zero"] = 0;
    val["one"] = 1;
    val["two"] = 2;
    val["three"] = 3;
    val["four"] = 4;
    val["five"] = 5;
    val["six"] = 6;
    val["seven"] = 7;
    val["eight"] = 8;
    val["nine"] = 9;

    // 10 ~ 19 的特殊词
    val["ten"] = 10;
    val["eleven"] = 11;
    val["twelve"] = 12;
    val["thirteen"] = 13;
    val["fourteen"] = 14;
    val["fifteen"] = 15;
    val["sixteen"] = 16;
    val["seventeen"] = 17;
    val["eighteen"] = 18;
    val["nineteen"] = 19;

    // 整十数
    val["twenty"] = 20;
    val["thirty"] = 30;
    val["forty"] = 40;
    val["fifty"] = 50;
    val["sixty"] = 60;
    val["seventy"] = 70;
    val["eighty"] = 80;
    val["ninety"] = 90;
}

int num;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string word;
    init();
    while(cin >> word)
    {
        if(word == "negative")
        {
            flag = -1;
        }
        if(val.count(word) > 0)
        {
            cur += val[word];
        }
        if(word == "hundred")
        {
            cur *= 100;
        }
        if(word == "thousand")
        {
            ans += (cur *= 1000);
            cur = 0;
        }
        if(word == "million")
        {
            ans += (cur *= 1000000);
            cur = 0;
        }
    }
    ans += cur;
    cout << ans * flag;
}
