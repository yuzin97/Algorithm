#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;


int main() //물어보기^^,,,,,흑

{
	int num;
	int arr[500][500] = { 0 }; //입력한거구
	int dparr[500][500] = { 0 };

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < (i + 1); j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	dparr[0][0] = arr[0][0];
	dparr[1][0] = dparr[0][0] + arr[1][0];
	dparr[1][1] = dparr[0][0] + arr[1][1];

	for (int i = 1; i < num - 2; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			if (arr[i + 1][j] < arr[i + 1][j + 1])
			{
				dparr[i + 1][j] = dparr[i][j] + arr[i + 1][j + 1];
			}
			else
			{
				dparr[i + 1][j] = dparr[i][j] + arr[i + 1][j];
			}
		}
	}

	int max = dparr[num - 1][0];

	for (int i = 1; i < num - 1; i++)
	{
		if (max < dparr[num - 1][i])
		{
			max = dparr[num - 1][i];
		}
	}

	printf("%d", max);


}