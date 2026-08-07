#include <bits/stdc++.h>
using namespace std;
/*
	自定义结构体存储坐标点 (x,y)；
写函数：指针接收坐标数组，计算数组内所有点到原点 (0,0) 距离最大的点；
*/
struct zb
{
	int x;
	int y;
};

int d(zb *wz,int i)
{
	int dd = wz[i].x *wz[i].x + wz[i].y *wz[i].y;
	return dd;
}
int main()
{
	zb wz[] = 
	{
        {1, 2},
        {3, 4},
        {-5, 0},
        {2, -7},
        {0, 3}
    };
    int i = 0;
    int mx = d(wz,i);
    int t = 0;
    for(int i = 1;i < 5;i++)
    {
    	if(d(wz,i)>mx)
    	{
    		mx = d(wz,i);
    		t = i;
		}
	}
	
    cout << wz[t].x <<","<<wz[t].y;
	system("pause");

	return 0;
}
