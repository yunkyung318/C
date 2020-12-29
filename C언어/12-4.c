#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int str_chr(char *s, int c)
{
	int i, count = 0;

	for (i = 0; s[i] != NULL; i++)
	{
		if (s[i] == c)
			count++;
	}
	return count;
}

void main()
{
	char s[50];
	char c;
	int i;

	printf("문자열을 입력하시오:");
	gets_s(s, 50);

	for (i = 'a'; i <= 'z'; i++)
		printf("%c:%d\n", i, str_chr(s, i));
}