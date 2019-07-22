#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int>& v1, pair<int, int>& v2);

int main()
{
	int casenum;

	scanf("%d", &casenum);

	vector <pair<int, int>> v(casenum);

	for (int i = 0; i < casenum; i++)
	{
		scanf("%d %d", &v[i].first, &v[i].second);
	}

	sort(v.begin(), v.end(), comp);

	for (int i = 0; i < casenum; i++)
	{
		printf("%d %d\n", v[i].first, v[i].second);
	}
}

bool comp(pair<int,int> &v1, pair<int,int> &v2)
{
	if (v1.first == v2.first)
	{
		return v1.second < v2.second;
	}
	return v1.first < v2.first;
}