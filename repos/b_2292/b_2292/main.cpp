#include <iostream>
using namespace std;

int function(int left, int right, int room, int i);

int main()
{
	int room;
	int answer;

	cin >> room;

	if (room == 1)
		cout << 1;
	else
	{
		answer = function(2, 7, room, 1);
		cout << answer;
	}
}

int function(int left, int right, int room, int i)
{
	if (left <= room && right >= room)
	{
		return (i + 1);
	}
	else
	{
		i++;
		right++;
		function(right, right + 6 * i - 1, room, i);
	}
}