#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main()
{
	int input;
	int sum;

	scanf("%d", &input);

	for (int i = 1; i <= 1000000; i++)
	{
		int x = i;
		int y = x;
		sum = i;

		while (y)
		{
			x = y % 10;
			y = y / 10;
			sum = sum + x;
		}

		if (sum == input)
		{
			printf("%d", i);
			return 0;
		}
	}
	printf("0");
}
