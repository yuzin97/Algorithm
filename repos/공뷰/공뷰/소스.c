#include <stdio.h>

#if 0
//문자열 복사 함수

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
//문자열 길이 측정

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
//문자열 연결하기
void str_add(char* d, const char* s)
{

	while (*d++);
	*d--; //오호....머징ㅋ
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
//모야이거왜안되냐구 ㅜ,ㅜ 문자열비교함수
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

	printf("전 : %d %d\n", a, b);
	swap(&a,&b);
	printf("후 : %d %d\n", a, b);
	
}

#endif // 0
