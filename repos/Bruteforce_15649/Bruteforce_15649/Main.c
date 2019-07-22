#pragma warning(disable : 4996)
#include <stdio.h>

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);

	solution(n, m);
}

int solution(int n, int m)
{
	if (m == 1)
	{
		for (int i = 0; i < n; i++)
		{
			printf("%d\n", i + 1);
		}
	}
	else
	{
		
	}
}