#include <stdio.h>

#if 0
//���ڿ� ���� �Լ�

void str_copy(char * d, const char * s)
{
	while (*d++ = *s++);
}

int main()
{
	char a[5];
	char b[5] = "ABCD";

	str_copy(a,b);
	printf("a = %s\nb = %s\n", a, b);
}
#endif

#if 0
//���ڿ� ���� ����

unsigned int str_length(const char* d)
{
	int count = 0;

	while (*d++)
	{
		count++;
	}
	return count;
}

int main()
{
	char a[] = "Willtek";

	printf("%d\n", sizeof(a));
	printf("%d\n", str_length(a));

	return 0;
}

#endif // 0


#if 0
//���ڿ� �����ϱ�
void str_add(char* d, const char* s)
{

	while (*d++);
	*d--; //��ȣ....��¡��
	while (*d++ = *s++);
}

int main()
{
	char a[15] = "Willtek";
	char b[15] = " Corp.";

	str_add(a, b);

	printf("%s\n", a);
}

#endif // 0

#if 0
//����̰ſ־ȵǳı� ��,�� ���ڿ����Լ�
int str_comp(const char* a, const char* b)
{
	
}

void main()
{
	printf("%d\n", str_comp("ABC", "BC"));
	printf("%d\n", str_comp("ABC", "AC"));
	printf("%d\n", str_comp("ABC", "AB"));
	printf("%d\n", str_comp("abc", "ABC"));
	printf("%d\n", str_comp("ab", " "));
}

#endif // 1

#if 0

void swap(int* p, int* q)
{
	int* temp;
	temp = 
}

int main()
{
	int a = 10, b = 20;

	printf("�� : %d %d\n", a, b);
	swap(&a,&b);
	printf("�� : %d %d\n", a, b);
	
}

#endif // 0
