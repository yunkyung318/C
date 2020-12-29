#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define IS_SPACE(c)(c=='\t'||c=='\n'||c==' ')

void main()
{
	int n = 0;
	char s[100];

	printf("문자열을 입력하시오:");
	gets_s(s, 100);

	for (int i = 0; s[i] != NULL; i++)
		if (IS_SPACE(s[i])) 
			n++;

	printf("공벡 문자의 개수:%d", n);
}