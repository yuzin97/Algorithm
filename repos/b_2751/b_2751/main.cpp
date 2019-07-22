#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int num;
	int i = 0;

	scanf("%d", &num);

	vector<int> arr(num);


	while (i != num)
	{
		scanf("%d", &arr[i]);
		i++;
	}

	sort(&arr[0], &arr[0] + num);

	for (int i = 0; i < num; i++)
	{
		printf("%d\n", arr[i]);
	}
}

