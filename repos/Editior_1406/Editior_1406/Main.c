#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char stack[600000];
top = -1;

int main()
{
	char data[100001]; //�־��� ����
	char type[5]; //�Է��� ��ɾ�
	int num; //��ɾ��
	int count = 0;//��ɾ�� Ȯ�ο�

	char* ptr; //tokenȭ �Ҷ� ���

	gets(data);

	while (num != count)
	{
		gets(type);
		
		ptr = strtok(type, " ");

		if (strcmp(ptr, "P") == 0) //push�ϱ�
		{

		}

	}

	
	
}