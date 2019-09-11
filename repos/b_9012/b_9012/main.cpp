#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int num;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		stack <char> s;
		string input;
		int j = 0;

		cin >> input;

		while (input[j] != '\0')
		{
			if (input[j] == '(')
			{
				s.push(input[j]);
			}
			if (input[j] == ')')
			{
				if (s.empty() == 0 && s.top() == '(')
				{
					s.pop();
				}
				else
				{
					s.push(input[j]);
				}
			}
			j++;
		}
		if (s.empty())
		{
			cout << "YES" << "\n";
		}
		else
		{
			cout << "NO" << "\n";
		}
	}


}