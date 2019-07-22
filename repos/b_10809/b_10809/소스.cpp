#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	int i = 0;

	getline(cin,word);

	int arr[26];

	for (int i = 0; i < 26; i++)
	{
		arr[i] = -1;
	}

	while (word[i] != '\0')
	{
		if (arr[(int)word[i] - 97] == -1)
		{
			arr[(int)word[i] - 97] = i;
			i++;
		}
		else
		{
			i++;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}

}