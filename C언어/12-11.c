#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main()
{
	char str[100];
	char word[] = " ";
	char *token;
	char *context[10];
	int i, count = 0;

	printf("���ڿ��� �Է��Ͻÿ�: ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = NULL;

	token = strtok(str, word);

	for (i = 0; token != NULL; i++) {
		context[i] = token;
		token = strtok(NULL, word);
		count++;
	}

	printf("��¹��ڿ�: ");
	for (i = count - 1; i > -1; i--)
		printf("%s ", context[i]);
}