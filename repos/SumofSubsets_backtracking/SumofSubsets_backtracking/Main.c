#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

void print();
void sumOfsubset(int i, int weight, int total);
int promising(int i, int weight, int total);

int W;
int w[10] = { 1,2,3,4,5,6,7,8,9,10 };
int x[10] = { 0, };


int main()
{
	int total = 0;
	
	printf("검사할 수 : ");
	scanf("%d", &W);

	for (int i = 0; i < 10; i++)
	{
		total = total + w[i];
	}

	sumOfsubset(-1, 0, total);

}

int promising(int i, int weight, int total)
{
	if (weight + total >= W && (weight == W || weight + weight + w[i + 1] <= W))
	{
		return 1;
	}
	return 0;
}

void print()
{
	for (int i = 0; i < 10; i++)
	{
		if (x[i] != 0)
			printf("%d ", x[i]);
	}
	printf("\n");
}

void sumOfsubset(int i, int weight, int total)
{
	if (promising(i, weight, total) == 1)
	{
		if (W == weight)
			print();
		else
		{
			x[i + 1] = w[i + 1];
			sumOfsubset(i + 1, weight + w[i + 1], total - w[i + 1]);
			x[i + 1] = 0;
			sumOfsubset(i + 1, weight, total - w[i + 1]);
		}
	}
}