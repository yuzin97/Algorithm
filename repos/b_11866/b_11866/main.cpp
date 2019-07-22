#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int queue[1000];
int selected[1000];
int rp, wp = 1;
int num;


int main()
{

	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		queue[wp++] = i;
	}

	while (wp > rp)
	{

	}

}