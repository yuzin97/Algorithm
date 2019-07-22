#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
using namespace std;

struct point
{
	int x;
	int y;
};


bool compare(point a, point b);


int main()
{
	int num;

	scanf("%d", &num);

	struct point arr[100000];

	for (int i = 0; i < num; i++)
	{
		scanf("%d %d", &arr[i].x, &arr[i].y);
	}

	sort(arr, arr + num, compare);

	for (int i = 0; i < num; i++)
	{
		printf("%d %d\n", arr[i].x, arr[i].y);
		if (i == num - 1)
		{
			return 0;
		}
	}

}


bool compare(point a, point b)
{
	if (a.y == b.y)
	{
		return a.x <  b.x;
	}
	else
	{
		return a.y < b.y;
	}
}