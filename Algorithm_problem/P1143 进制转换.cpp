#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(1e9 , '\n');
    string num;
    getline(cin , num);
    int p;
    cin >> p;
    int sum = 0;
    int pow = 1;
     for (int i = num.length() - 1; i >= 0; i--)
     {
        int t;
        if (num[i] >= '0' && num[i] <= '9')
        {
            t = num[i] - '0';
        }
        else
        {
            t = num[i] - 'A' + 10;
        }
        sum += t * pow;
        pow *= n;
    }
    vector<int> ans;
    int remainder;
    while(sum > 0)
    {
        remainder = sum % p;
        ans.push_back(remainder);
        sum /= p;
    }
    reverse(ans.begin(),ans.end());
    for (int x : ans) {
    if (x >= 10) cout << (char)('A' + x - 10);
    else cout << x;
}
}