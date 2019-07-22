#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int num;

	cin >> num;

	int arr[1000];

	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + num);

	for (int i = 0; i < num; i++)
	{
		printf("%d\n", arr[i]);
	}
}