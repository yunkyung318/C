#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main()
{
	char s[50];
	char *token;
	char seps[] = " ";
	int count = 0;

	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets_s(s, 50);

	token = strtok(s, seps);

	while (token != NULL)
	{
		count++;
		token = strtok(NULL, seps);
	}
	printf("�ܾ��� ���� %d�Դϴ�.", count);
}