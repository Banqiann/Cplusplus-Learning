#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> num;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        num.push_back(t);
    }
    sort(num.begin(),num.end());
    for(int i = 1; i < n; i++)
    {
        if(num[i] == num[i - 1])
        {
           num.erase(unique(num.begin(), num.end()), num.end());
        }
    }
    cout << num.size() << '\n' ;
    for(int i = 0; i < num.size(); i++)
    {
        cout << num[i] <<" ";
    }
    return 0;
}