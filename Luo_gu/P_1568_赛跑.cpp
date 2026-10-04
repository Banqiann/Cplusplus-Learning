#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n , m;
struct KC
{
    int speed;
    int time;
};
struct SH
{
    int speed;
    int time;
};
int kc_pos = 0;
int sh_pos = 0;
int ans = 0;
vector<KC> kc;
vector<SH> sh;
bool kc_first = false;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    int ans_time = 0;
    for(int i = 0; i < n; i++)
    {
        int a , b;
        cin >> a >> b;
        ans_time += b;
        KC rub = {a , ans_time};
        kc.push_back(rub);
    }
    int ans_time2 = 0;
    for(int i = 0; i < m; i++)
    {
        int a , b;
        cin >> a >> b;
        ans_time2 += b;
        SH rub = {a, ans_time2};
        sh.push_back(rub);
    }
    if(kc[0].speed > sh[0].speed)
    {
        kc_first = true;
    }
    int kc_pos = 0;
    int sh_pos = 0;
    int i = 0;
    int j = 0;
    for(int t = 1; t <= ans_time; t++)
    {
        if(kc[i].time < t)
        {
            i++;
        }
        if(sh[j].time < t)
        {
            j++;
        }
        kc_pos += kc[i].speed;
        sh_pos += sh[j].speed;
        if(kc_first == false && kc_pos > sh_pos)
        {
            ans++;
            kc_first = true;
        }
        else if(kc_first == true && kc_pos < sh_pos)
        {
            ans++;
            kc_first = false;
        }
    }
    cout << ans;
}
