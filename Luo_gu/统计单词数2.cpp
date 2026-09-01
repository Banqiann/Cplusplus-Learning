#include <bits/stdc++.h>
using namespace std;

// 功能：把单个大写字符改成小写，传引用 &c，直接修改原字符
void xiao(char &c)
{
    if(c >= 'A' && c <= 'Z')
        c += 32;
}

int main()
{
    string word, art;
    cin >> word;                // 读第一行：要查找的单词，cin>>自动读到换行停止，丢弃换行符
    for_each(word.begin(), word.end(), xiao); // 将查找单词全部转为小写，实现不区分大小写
    
    cin.ignore();               // ⭐超级关键！cin >> word读完后，输入缓冲区遗留回车'\n'，ignore把这个回车吃掉，不然下一句getline会读到空字符串
    
    getline(cin, art);          // 读取第二行整篇文章，**空格全部保留**，每个空格占一个下标位置，下标从0开始

    int cnt = 0;                // 统计匹配成功次数
    int first_pos = -1;         // 第一次出现的起始下标，没找到保持-1
    int wlen = word.size();     // 查找单词的长度
    int alen = art.size();      // 整篇文章的长度

    // i：文章中尝试匹配的起始下标
    // i + wlen <= alen：保证截取不会越界，后面要有足够字符
    for(int i = 0; i + wlen <= alen; ++i)
    {
        string sub = art.substr(i, wlen); // 从i位置，截取长度wlen的一段子串
        for_each(sub.begin(), sub.end(), xiao); // 把截取出来的片段转小写

        if(sub == word) // 片段小写后和目标单词相等，有可能匹配成功
        {
            // 题目硬性条件：必须是【独立单词】！不能是别的单词的一部分
            bool left_ok = false;
            bool right_ok = false;

            // 左边条件：i是文章开头， OR i的前一个字符是空格
            if(i == 0 || art[i-1] == ' ')
                left_ok = true;
            
            // 右边条件：片段刚好到文章末尾， OR 片段后面一个字符是空格
            if(i + wlen == alen || art[i + wlen] == ' ')
                right_ok = true;

            // 左右都满足，才是完整独立单词，才算真正匹配
            if(left_ok && right_ok)
            {
                cnt++;
                if(first_pos == -1) // 只记录第一次出现的下标
                    first_pos = i;
            }
        }
    }

    if(cnt != 0)
    {
        cout << cnt << " " << first_pos << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}
