#include <iostream>
#include <cstdio>
#include <vector>
#include <utility>
using namespace std;

vector<pair<int, int>> arr;

void move(int num, int start, int source, int destination);

int main()
{
	int num;

	cin >> num;

	move(num, 1, 2, 3);

	cout << arr.size() << "\n";

	for (auto v : arr)
	{
		cout << v.first << " " << v.second << "\n";
	}




}

void move(int num, int start, int source, int destination )
{
	if (num == 1)
	{
		arr.push_back(make_pair(start, destination));
		return;
	}

	move(num - 1, start, destination, source);
	arr.push_back(make_pair(start, destination));
	move(num - 1, source, start, destination);

}