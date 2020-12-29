#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	FILE *fp1, *fp2;
	char name1[100], name2[100];
	char buffer1[1000], buffer2[1000];

	printf("ù���� ���� �̸�: ");
	scanf("%s", name1);

	printf("�ι�° ���� �̸�: ");
	scanf("%s", name2);

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
		char *p1 = fgets(buffer1, 1000, fp1);
		char *p2 = fgets(buffer2, 1000, fp2);

		if (p1 == NULL || p2 == NULL)
			break;

		if (strcmp(buffer1, buffer2) != 0) {
			printf("<< %s", buffer1);
			printf(">> %s", buffer2);
		}
	}

	fclose(fp1);
	fclose(fp2);
}