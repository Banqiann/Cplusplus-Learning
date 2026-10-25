#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1) return false;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> alpha(26 , 0);
    char dc;
    while(cin >> dc)
    {
        alpha[dc - 'a'] += 1;
    }
    int max = 0 , min = 100;
    for(int i = 0; i < 26; i++)
    {
        if(alpha[i] > max)
        {
            max = alpha[i];
        }
        if(alpha[i] < min && alpha[i] != 0)
        {
            min = alpha[i];
        }
    }
    int num = max - min;
    if(is_prime(num) == true)
    {
        cout << "Lucky Word" << '\n' ;
        cout << num;
    }
    else
    {
        cout << "No Answer" << '\n' ;
        cout << "0" ;
    }
}