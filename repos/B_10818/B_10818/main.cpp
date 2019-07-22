#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int num;
	int input;
	int max = -1000000, min = 1000000;
	vector<int> v;

	cin >> num;

	v.reserve(num);

	for (int i = 0; i < num; i++)
	{
		cin >> input;
		v.push_back(input);
	}

	for (int j = 0; j < num; j++)
	{
		if (max < v[j])
		{
			max = v[j];
		}
		if (min > v[j])
		{
			min = v[j];
		}
	}

	cout << min << " " << max;
}