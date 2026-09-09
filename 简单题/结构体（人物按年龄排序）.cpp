#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
struct hero 
{
	string name;
	int age;
	string sex;
};
void px(hero *arr,int len)
{
	for(int i = 0;i < len - 1;i++)
	{
		for(int j = 0;j < len - i - 1;j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				hero temp = arr[j];	
				arr[j] = arr[j + 1];	
				arr[j + 1] = temp;
		}
	}
}
}
void sc(hero *arr,int len)
{
	for(int i = 0;i < len; i++)
	{
		cout<<arr[i].name<<" ";
	}
}
signed main()
{
	struct hero arr[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	int len = sizeof(arr)/sizeof(hero);
	px(arr,len);
	sc(arr,len);
}

