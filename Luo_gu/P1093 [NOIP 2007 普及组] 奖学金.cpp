#include <bits/stdc++.h>
using namespace std;

struct students
{
    int id;
    int chinese;
    int math;
    int english;
    int sum;
};


int main()
{
    int num;
    cin >> num;
    vector<students> student(num);
    for(int i = 0; i < num; i++)
    {
        cin >> student[i].chinese >> student[i].math >> student[i].english ;
        student[i].sum = student[i].chinese + student[i].math + student[i].english;
        student[i].id = i + 1;
    }
    sort(student.begin(), student.end(), [](const students &a, const students &b) {
    // 优先级 1：先比总分（降序：高分排前面）
    if (a.sum != b.sum) {
        return a.sum > b.sum;
    }
    // 优先级 2：总分相同，再比语文（降序：高分排前面）
    if (a.chinese != b.chinese) {
        return a.chinese > b.chinese;
    }
    // 优先级 3：总分和语文都相同，比学号（升序：小号排前面）
    return a.id < b.id;
    });
  
    for(int i = 0; i < 5; i++)
    {
        cout << student[i].id << " " << student[i].sum <<'\n'; 
    }
}