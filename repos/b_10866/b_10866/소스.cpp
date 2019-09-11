#define CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <deque>
using namespace std;

string order[9] = { "push_front","push_back","pop_front","pop_back","size","empty","front","back","abcd" };

void abcd()
{
	printf("okok");
}
string find(string input)
{
	for (int i = 0; i < 9; i++)
	{
		if (input.compare(order[i]) == 0)
		{
			return order[i];
		}
	}
}
int main()
{

	string input;

	cin >> input;

	find(input)();

}
