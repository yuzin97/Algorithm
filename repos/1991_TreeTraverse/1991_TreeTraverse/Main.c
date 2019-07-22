#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tree {
	char data; //값
	treepointer Lchild; //왼쪽자식노드
	treepointer Rchild; //오른쪽자식노드
}tree;

typedef tree* treepointer;

int main()
{
	int num;
	int count = 0;

	scanf("%d ", &num);

	treepointer Tree = (treepointer)malloc(sizeof(tree) * num); //크기가 num인 구조체 배열

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