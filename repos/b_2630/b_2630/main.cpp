#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int arr[128 + 10][128 + 10];
int size;
int white;
int blue;

int function(int start, int size)
{
	for (int i = start; i < size; i++)
	{
		for (int j = start; j < size; j++)
		{
			if (arr[i][j] == 0)
			{
				function(start, size / 2);
			}
		}
	}
}

int main()
{
	scanf("%d", &size);

	for (int i = 0; i < size; i++) //За
	{
		for (int j = 0; j < size; j++) //ї­
		{
			scanf("%d", &arr[i][j]);
		}
	}


}

