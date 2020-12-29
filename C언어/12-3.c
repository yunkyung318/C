#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int str_chr(char *s, int c)
{
	int i, a = 0;
	for (i = 0; s[i] != NULL; i++)
	{
		if (s[i] == c)
			a++;
	}
	return a;
}

void main()
{
	char s[50];
	char c;
	
	printf("문자열을 입력하시오 : ");
	gets_s(s,50);

	printf("문자를 입력하시오 : ");
	scanf("%c", &c);

	printf("%c의 개수 : %d", c, str_chr(s,c));
}