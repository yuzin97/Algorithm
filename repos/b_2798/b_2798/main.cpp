#include <iostream>
using namespace std;

int main()
{
	int cardnum;
	int radix;
	int max = 0, sum = 0;
	int arr[100];
	int answer[3];

	cin >> cardnum >> radix;

	for (int i = 0; i < cardnum; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < cardnum; i++)
	{
		for (int j = i + 1; j < cardnum; j++)
		{
			for (int k = j + 1; k < cardnum; k++)
			{
				sum = arr[i] + arr[j] + arr[k];

				if (max < sum && sum <= radix)
				{
					max = sum;
				}
			}
		}
	}
	
	cout << max;
}