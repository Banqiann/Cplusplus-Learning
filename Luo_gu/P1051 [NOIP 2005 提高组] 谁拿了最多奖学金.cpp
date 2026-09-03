#include<bits/stdc++.h>
using namespace std;

struct student
{
    string name;
    int score_qimo;
    int score_banji;
    char is_ganbu;
    char is_west;
    int lunwen;
};

int calc(const student& s)
{
    int num = 0;

    // 1. 院士奖学金：期末平均成绩高于 80 分，并且在期末发表过 1 篇或 1 篇以上论文
    if (s.score_qimo > 80 && s.lunwen >= 1)
    {
        num += 8000;
    }

    // 2. 五四奖学金：期末平均成绩高于 85 分，并且班级评议成绩高于 80 分
    if (s.score_qimo > 85 && s.score_banji > 80)
    {
        num += 4000;
    }

    // 3. 成绩优秀奖：期末平均成绩高于 90 分
    if (s.score_qimo > 90)
    {
        num += 2000;
    }

    // 4. 西部奖学金：期末平均成绩高于 85 分的西部省份学生
    if (s.score_qimo > 85 && s.is_west == 'Y')
    {
        num += 1000;
    }

    // 5. 班级贡献奖：班级评议成绩高于 80 分的学生干部
    if (s.score_banji > 80 && s.is_ganbu == 'Y')
    {
        num += 850;
    }

    return num;
}

int main()
{
    int n;
    cin >> n;
    string dummy;
    getline(cin, dummy);
    vector<student> students(n);
    for(int i = 0; i < n ; i++)
    {
        string line;
        getline(cin , line);
        istringstream iss(line);
        iss >> students[i].name
            >> students[i].score_qimo
            >> students[i].score_banji
            >> students[i].is_ganbu
            >> students[i].is_west
            >> students[i].lunwen;
    }
    int max = -1 , sum = 0 ,loc = 0;
    for(int i = 0; i < n; i++)
    {
       sum += calc(students[i]);
       if(calc(students[i]) > max)
       {
        max = calc(students[i]);
        loc = i;
       }
    }
    cout << students[loc].name << '\n' ;
    cout << calc(students[loc]) << '\n';
    cout << sum;
}