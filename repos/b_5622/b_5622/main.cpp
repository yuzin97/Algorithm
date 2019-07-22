#include <iostream>
#include <string>
using namespace std;

int main()
{
	string sentence;
	int sum = 0;
	int i = 0;

	getline(cin, sentence);

	while (sentence[i] != '\0')
	{
		if ('A' <= sentence[i] && sentence[i] <= 'C')
		{
			sum = sum + 3;
		}
		else if ('D' <= sentence[i] && sentence[i] <= 'F')
		{
			sum = sum + 4;
		}
		else if ('G' <= sentence[i] && sentence[i] <= 'I')
		{
			sum = sum + 5;
		}
		else if ('J' <= sentence[i] && sentence[i] <= 'L')
		{
			sum = sum + 6;
		}
		else if ('M' <= sentence[i] && sentence[i] <= 'O')
		{
			sum = sum + 7;
		}
		else if ('P' <= sentence[i] && sentence[i] <= 'S')
		{
			sum = sum + 8;
		}
		else if ('T' <= sentence[i] && sentence[i] <= 'V')
		{
			sum = sum + 9;
		}
		else if ('W' <= sentence[i] && sentence[i] <= 'Z')
		{
			sum = sum + 10;
		}
		i++;
	}

	cout << sum;

}