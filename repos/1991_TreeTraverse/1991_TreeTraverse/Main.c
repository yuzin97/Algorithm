#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tree {
	char data; //��
	treepointer Lchild; //�����ڽĳ��
	treepointer Rchild; //�������ڽĳ��
}tree;

typedef tree* treepointer;

int main()
{
	int num;
	int count = 0;

	scanf("%d ", &num);

	treepointer Tree = (treepointer)malloc(sizeof(tree) * num); //ũ�Ⱑ num�� ����ü �迭

	while (count != num)
	{
		char p;
		char L;
		char R;

		scanf("%c %c %c", &p, &L, &R);

		Tree[count]

		count++;

		
		


	}
}

void createNode(char data, char L, char R)
{

}