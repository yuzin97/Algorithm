#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <queue>
using namespace std;

int main()
{
	int num;
	queue<int> q;

	scanf("%d", &num);

	if (num != 1)
	{
		for (int i = 1; i <= num; i++)
		{
			q.push(i);
		}

		while (q.size() != 2)
		{
			int x;
			q.pop();
			x = q.front();
			q.pop();
			q.push(x);
		}
		printf("%d", q.back());
		return 0;
	}
	else
	{
		printf("1");
		return 0;
	}


}