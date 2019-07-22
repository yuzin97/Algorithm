#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
using namespace std;

bool comp(int a, int b);

int time[1000];

int main()
{
	int num;
	int sum = 0;
	int append = 0;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &time[i]);
	}

	sort(time, time + num); 

	sum = time[0];
	append = time[0];

	for (int i = 1; i < num; i++)
	{
		sum = sum + time[i];
		append = append + sum;

	}

	printf("%d", append);


	
}