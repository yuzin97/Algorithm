#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#define MIN(a,b) ((a)>(b) ? b:a)
using namespace std;


int price[1010][5];
int dp[1010][5];
int sum,houseNum;

int main()
{

	scanf("%d", &houseNum);

	for (int i = 1; i <= houseNum; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			scanf("%d", &price[i][j]);
		}
	}

	dp[1][1] = price[1][1]; //»¡
	dp[1][2] = price[1][2]; //ÃÊ
	dp[1][3] = price[1][3]; //ÆÄ

	for (int i = 2; i <= houseNum; i++)
	{
		dp[i][1] = price[i][1] + MIN(dp[i - 1][2], dp[i - 1][3]);
		dp[i][2] = price[i][2] + MIN(dp[i - 1][1], dp[i - 1][3]);
		dp[i][3] = price[i][3] + MIN(dp[i - 1][1], dp[i - 1][2]);
	}

	int min = dp[houseNum][1];

	for (int i = 1; i <= 3; i++)
	{
		if (min > dp[houseNum][i])
		{
			min = dp[houseNum][i];
		}
	}

	printf("%d", min);

}