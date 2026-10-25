#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum;
    cin >> sum ; 
    cout << sum << '\n';
    vector<int> number(sum , 0);
    for(int i = 0; i < sum; i++)
    {
        for(int j = 0; j < sum; j++)
        {
            if(i != j)
            {
                number[j] = 1 - number[j];
            }
        }
        for(int t = 0; t < sum; t++)
        {
            cout << number[t] ;
        }
        cout << '\n';
    }
}