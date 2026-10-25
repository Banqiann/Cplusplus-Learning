#include <iostream>
#include <vector>
using namespace std;

vector<int> num = {0, 1, 1};

void fib()  //斐波那契数组生成
{
    for(int j = 3; j <= 25; j++)
    {
        num.push_back(num[j - 1] + num[j - 2]);
    }
}

// 第 n 站开出时 a 的系数
int a_xishu(int n)
{
    if (n <= 2) return 1;
    // 从第 3 站开始，a 的系数刚好就是斐波那契项：
    // n=3 时为 num[2]+1 = 2
    // n=4 时为 num[3]+1 = 2
    // n=5 时为 num[4]+1 = 3
    // n=6 时为 num[5]+1 = 4
    return num[n - 2] + 1;
}

// 第 n 站开出时 p 的系数 1 1 2 3 5 8 13
int p_xishu(int n)
{
    if (n <= 3) return 0;
    // 从第 4 站开始，p 的系数刚好就是 num[n-2] - 1；
    // n=4 时为 num[3]-1 = 1
    // n=5 时为 num[4]-1 = 2
    // n=6 时为 num[5]-1 = 4
    return num[n - 2] - 1;
}

int main()
{
    fib();
    int a = 0, n = 0, m = 0, x = 0;
    cin >> a >> n >> m >> x;

    // 前两站人数恒等于 a，无论 n 和 m 是多少
    if (x <= 2)
    {
        cout << a;
        return 0;
    }

    // 利用第 n-1 站开出时的人数 m，反推第 2 站上车人数 p
    int p = (m - a_xishu(n - 1) * a) / p_xishu(n - 1);

    // 输出第 x 站的人数
    cout << a_xishu(x) * a + p_xishu(x) * p;
    return 0;
}