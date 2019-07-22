#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pushStack(data);
int popStack();
int sizeOfstack();
int isEmpty();
int topData();

int top = -1; //전역변수로 선언했음
int* stack; //스택

int main()
{
	int num;
	int count = 0;
	char str[10]; //명령어 및 숫자 입력받기
	char* ptr; //문자열 잘라서 명령어만 보기

	scanf("%d ", &num);

	stack = (int*)malloc(sizeof(int) * num); //입력받은 수 만큼 메모리 동적할당

	while (count != num) //같아지면 종료
	{
		count++;

		gets(str);
		
		ptr = strtok(str, " "); //공백기준으로 자르기

		if (strcmp(ptr, "push") == 0) //push가 들어왔으면
		{
			ptr = strtok(NULL, " ");
			int data = atoi(ptr); //문자를 숫자로 바꿈
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