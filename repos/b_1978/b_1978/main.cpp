#include <iostream>
using namespace std;

int main()
{
	int num;
	int input;
	int count = 0;

	cin >> num;

	for (int j = 0; j < num; j++)
	{
		cin >> input;

		for (int i = 2; i <= input; i++)
		{
			if (input % i == 0 && i == input)
			{
				count++;
			}
			else if (input % i == 0 && i != input)
			{
				break;
			}
		}
	}

	cout << count;
}