#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <tuple>
#include <string>
#include <vector>
using namespace std;

bool comp(tuple<int, int, string> &a, tuple<int, int, string> &b);

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector <tuple <int,int, string>> arr; //vector �����̳� Ÿ������ 

	int casenum, i =0;
	int age;
	string name;

	cin >> casenum;

	for (int i = 0; i < casenum; i++)
	{
		cin >> age;
		cin >> name;
		arr.push_back(make_tuple(i, age, name));
	}

	sort(arr.begin(), arr.end(), comp);

	for (int i = 0; i < casenum; i++)
	{
		cout << get<1>(arr[i]) << " " << get<2>(arr[i]) << "\n"; //endl���� �ð��ʰ��� ���� ����...
	}
}

bool comp(tuple<int,int, string> &a, tuple<int,int, string> &b)
{
	if (get<1>(a) == get <1>(b)) //���̰� ������
	{
		return get<0>(a) < get<0>(b);
	}
	return get<1>(a) < get<1>(b);
}