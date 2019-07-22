#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main()
{
	int num;
	long long int arr[90]; //longlong int로하고 lld로해야함 ㅜ-ㅜ

	scanf("%d", &num);

	arr[0] = 0;
	arr[1] = 1;

	for (int i = 2; i <= num; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2]; 
	}

	printf("%lld", arr[num]);


}