#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void check_alpha(char c)
{
	if (c >= 'a'&&c <= 'z')
		printf("%c는 알파벳 문자입니다.\n", c);
	else
		printf("%c는 알파벳 문자가 아닙니다.\n",c);
}

void main()
{
	char c;

	printf("문자를 입력하시오 : ");
	scanf("%c", &c);

	check_alpha(c);
}