#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int caseNum;
	int studentNum;
	int score;
	int count;
	double average;
	double sum;
	double arr[1000];
	double percent = 0;

	cin >> caseNum;

	for (int i = 0; i < caseNum; i++)
	{
		cin >> studentNum;
		sum = 0;
		count = 0;
		
		for (int j = 0; j < studentNum; j++)
		{
			cin >> score;
			arr[j] = score;
			
			sum = sum + arr[j];
		}

		average = sum / studentNum;

		for (int k = 0; k < studentNum; k++)
		{
			if (arr[k] > average)
			{
				count++;
			}
		}

		percent = ((double)count / studentNum) * 100;

		cout << fixed;
		cout.precision(3);
		cout << percent << "%" << endl;
	}
}