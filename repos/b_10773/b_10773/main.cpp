#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int stack[100000];
int top = -1; //�����ϰ� �ֱ� / ���� �����ϱ�
int num;
int sum;

int main()
{
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		int input;
		scanf("%d", &input);
		if (input == 0)
		{
			sum = sum -  stack[top--];
		}
		else
		{
			sum = sum + input;
			stack[++top] = input;
		}
	}
	
	printf("%d", sum);
	
}