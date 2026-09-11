#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num , k;
    cin >> num >> k;
    vector<int> line;
    for(int i = 0; i < num; i++)
    {
        int t;
        cin >> t;
        line.push_back(t);
    }
    sort(line.begin() , line.end());
    line.erase(unique(line.begin(), line.end()) , line.end());
    if(line.size() < k)
    {
        cout << "NO RESULT";
    }
    else
    {
        cout << line[k - 1];
    }
}