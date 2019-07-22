#include <iostream>
using namespace std;

int main()
{
	int input;
	int i = 0;
	int arr[10];

	cin >> input;

	while (input >= 10)
	{
		arr[i] = input % 10;
		input = input / 10;
		i++;
	}

	arr[i] = input;

	for (int j = 0; j < i+1 ; j++)
	{
		{
			for (int k = j+1; k < i+1; k++)
			{
				if (arr[j] < arr[k])
				{
					int temp = arr[k];
					arr[k] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}

	for (int k = 0; k < i + 1; k++)
	{
		cout << arr[k];
	}

}