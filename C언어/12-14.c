#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char str[80];
	char ctr1[20];
	char ctr2[20];
	char *token;
	char *word = " ";
	char *context[50];

	int i, count = 0;

	printf("���ڿ��� �Է��Ͻÿ�: ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = NULL;

	printf("ã�� ���ڿ�: ");
	fgets(ctr1, sizeof(ctr1), stdin);
	ctr1[strlen(ctr1) - 1] = NULL;

	printf("�ٲ� ���ڿ�: ");
	fgets(ctr2, sizeof(ctr2), stdin);
	ctr2[strlen(ctr2) - 1] = NULL;

	token = strtok(str, word);
	for (i = 0; token != NULL; i++) {
		context[i] = token;
		token = strtok(NULL, word);
		count++;
	}

	for (i = 0; i < count; i++)
		if (!strcmp(ctr1, context[i]))
			context[i] = ctr2;

	printf("���: ");
	for (i = 0; i < count; i++)
		printf("%s ", context[i]);
	printf("\n");
}