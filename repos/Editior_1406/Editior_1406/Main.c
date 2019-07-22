#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char stack[600000];
top = -1;

int main()
{
	char data[100001]; //주어진 정보
	char type[5]; //입력한 명령어
	int num; //명령어수
	int count = 0;//명령어수 확인용

	char* ptr; //token화 할때 사용

	gets(data);

	while (num != count)
	{
		gets(type);
		
		ptr = strtok(type, " ");

		if (strcmp(ptr, "P") == 0) //push하기
		{

		}

	}

	
	
}