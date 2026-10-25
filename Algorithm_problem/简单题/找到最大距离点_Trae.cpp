#include <iostream>
using namespace std;

// 自定义结构体存储坐标点 (x, y)
struct Point
{
	double x;
	double y;
};

// 计算点到原点距离的平方（避免开方运算）
double distanceSquared(const Point* points, int index)
{
	double dx = points[index].x;
	double dy = points[index].y;
	return dx * dx + dy * dy;
}

// 遍历数组，返回距离原点最远的点
Point findFarthestPoint(const Point* points, size_t size)
{
	Point farthest = points[0];
	double maxDist = distanceSquared(points, 0);

	for (size_t i = 1; i < size; i++)
	{
		double dist = distanceSquared(points, static_cast<int>(i));
		if (dist > maxDist)
		{
			maxDist = dist;
			farthest = points[i];
		}
	}

	return farthest;
}

int main()
{
	Point wz[] =
	{
		{1, 2},
		{3, 4},
		{-5, 0},
		{2, -7},
		{0, 3}
	};

	size_t size = sizeof(wz) / sizeof(wz[0]);
	Point result = findFarthestPoint(wz, size);

	cout << result.x << "," << result.y << endl;

	return 0;
}
