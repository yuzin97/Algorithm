#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int arr[1000010];

int main()
{
	int caseNum;
	int price;
	int pricecopy;
	int count = 0;

	scanf("%d %d", &caseNum, &price);

	for (int i = 0; i < caseNum; i++)
	{
		scanf("%d", &arr[i]);
	}

	pricecopy = price;

	while (pricecopy != 0)
	{
		int x = 0;

		for (int i = caseNum-1;i >= 0; i--)
		{
			if (arr[i] <= pricecopy)
			{
				x = arr[i];
				break;
			}
		}

		count = count + pricecopy / x; //4200/1000 == 4 // 
		pricecopy = pricecopy % x; //200
		
	}

	printf("%d", count);
}