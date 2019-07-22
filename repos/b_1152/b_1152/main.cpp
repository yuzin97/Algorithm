#include <iostream>
#include <string>
using namespace std;

int main()
{
	string sentence;
	int i = 0;
	int count = 1;

	getline(cin, sentence);

	while (sentence[i] != '\0')
	{
		if (sentence[i] == ' ')
		{
			count++;
		}
		i++;
	}

	if (sentence[0] == ' ')
	{
		count--;
		if (sentence[i-1] == ' ')
		{
			count--;
			cout << count;
		}
		else
		{
			cout << count;
		}
	}
	else
	{
		if (sentence[i-1] == ' ')
		{
			count--;
			cout << count;
		}
		else
		{
			cout << count;
		}
	}
}