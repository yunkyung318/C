#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main()
{
	char s[50];
	char *token;
	char seps[] = " ";
	int count = 0;

	printf("문자열을 입력하시오 : ");
	gets_s(s, 50);

	token = strtok(s, seps);

	while (token != NULL)
	{
		count++;
		token = strtok(NULL, seps);
	}
	printf("단어의 수는 %d입니다.", count);
}