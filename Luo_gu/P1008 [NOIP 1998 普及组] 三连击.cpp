#include<bits/stdc++.h>
using namespace std;

vector<int> num(10,0);
void cf(int n)
{
    num[n % 10] = 1;
    num[n / 10 % 10] = 1;
    num[n / 100] = 1;
}

void ck()
{
    fill(num.begin(), num.end(), 0);
}

int main()
{
    int num1 = 191;
    while(num1 < 501)
    {
        num1++;
        int num2 = 2 * num1;
        int num3 = 3 * num1;
        cf(num1);
        cf(num2);
        cf(num3);
        bool flag = true;
        for(int i = 1; i < 10; i++)
        {
            if(num[i] == 0)
            {
                flag = false;
                break;
            }
        }
        if(flag == true)
        {
            cout << num1 << " " << num2 << " " << num3 << endl ;
        }
        ck();
    }
}