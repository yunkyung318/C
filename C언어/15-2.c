#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
	FILE *fp1, *fp2;
	char name1[100], name2[100];
	char c;

	printf("ù���� ���� �̸� : ");
	scanf("%s", name1);

	printf("�ι�° ���� �̸� : ");
	scanf("%s",name2);

	fp1 = fopen("sample.txt", "r");
	fp2 = fopen("sample2.txt", "r");

	if (fp1 == NULL) {
		printf("ù��° ���� ���� ����\n");
		exit(1);
	}

	if (fp2 == NULL) {
		printf("�ι�° ���� ���� ����\n");
		exit(1);
	}

	while (1) {
		c = fgetc(fp1);
		
		if (c == EOF)
			break;

		fputc(toupper(c), fp2);
	}

	fclose(fp1);
	fclose(fp2);
}