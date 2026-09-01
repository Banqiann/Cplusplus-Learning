#include <bits/stdc++.h>
using namespace std;

void xiao(char &s)
{
     if(s >= 65 && s <= 90)
      {
          s += 32;
      }
}

int main()
{
    int flag = -1;
    int n = 0; //计数
    int t = 0; //位置
    string a,b;
    cin >> a;
    for_each(a.begin(),a.end(),xiao);
    while(cin >> b)
    {
        t++;   
        for_each(b.begin(),b.end(),xiao); 
        if(b == a)
        {
            n += 1;
            if(flag == -1) 
            {
                flag = t;
            }
        }
    }
    if(n != 0)
    {
        cout << n <<" "<<flag - 1;
    }
    else
    {
        cout << "-1";
    }
    return 0;
}