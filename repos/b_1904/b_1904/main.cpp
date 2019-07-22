#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <math.h>
using namespace std;
//00 È¤Àº 1

long int arr[1000000];
int num;


int main()
{
	scanf("%d", &num);

	arr[1] = 1;
	arr[2] = 2;


	for (int i = 3; i <= num; i++)
	{
		arr[i] = (arr[i - 2] + arr[i - 1])%15746;
	}

	printf("%ld", arr[num]);

	
}