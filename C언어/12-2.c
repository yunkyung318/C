#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s[100];
	char *token;
	char seps[] = " ";

	printf("���� ���ڰ� �ִ� ���ڿ��� �Է��Ͻÿ� : ");
	gets_s(s, 100);
	token = strtok(s, seps);

	while (token != 0)
	{
		printf("%s", token);
		token = strtok(NULL, seps);
	}
}