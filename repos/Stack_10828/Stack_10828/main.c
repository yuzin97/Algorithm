#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pushStack(data);
int popStack();
int sizeOfstack();
int isEmpty();
int topData();

int top = -1; //���������� ��������
int* stack; //����

int main()
{
	int num;
	int count = 0;
	char str[10]; //��ɾ� �� ���� �Է¹ޱ�
	char* ptr; //���ڿ� �߶� ��ɾ ����

	scanf("%d ", &num);

	stack = (int*)malloc(sizeof(int) * num); //�Է¹��� �� ��ŭ �޸� �����Ҵ�

	while (count != num) //�������� ����
	{
		count++;

		gets(str);
		
		ptr = strtok(str, " "); //����������� �ڸ���

		if (strcmp(ptr, "push") == 0) //push�� ��������
		{
			ptr = strtok(NULL, " ");
			int data = atoi(ptr); //���ڸ� ���ڷ� �ٲ�
			pushStack(data);
		}
		else if (strcmp(ptr, "pop") == 0)
		{
			int popData = popStack();
			printf("%d\n", popData);
		}
		else if (strcmp(ptr, "size") == 0)
		{
			int size = sizeOfstack();
			printf("%d\n", size);
		}
		else if (strcmp(ptr, "empty") == 0)
		{
			int empty = isEmpty();
			printf("%d\n", empty);
		}
		else if (strcmp(ptr, "top") == 0)
		{
			int tData = topData();
			printf("%d\n", tData);
		}

	}

	return 0;
}

void pushStack(data)
{
	stack[++top] = data;
}

int popStack()
{
	if (top == -1)
	{
		return -1;
	}
	else
	{
		return stack[top--];
	}
} 

int sizeOfstack()
{
	return (top + 1);
}

int isEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}

int topData()
{
	if (top == -1)
		return -1;
	else
		return stack[top];
}