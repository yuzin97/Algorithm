#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int num;
	double max = 0;
	double score;
	double average;
	double sum = 0;

	cin >> num;

	double* arr;
	arr = (double*)malloc(num * sizeof(double));

	for (int i = 0; i < num; i++)
	{
		cin >> score;
		arr[i] = score;
		
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	for (int i = 0; i < num; i++)
	{
		arr[i] = arr[i] / max * 100;
		sum = sum + arr[i];
	}

	average = sum / num;

	cout << fixed;
	cout.precision(2);
	cout << average << endl;
}