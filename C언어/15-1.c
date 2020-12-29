#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp1, *fp2;
	int f1, f2;

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

		int c1 = fgetc(fp1);

		int c2 = fgetc(fp2);

		if (c1 == EOF || c2 == EOF)

			break;

		if (c1 != c2) {

			printf("�� ������ ���� �ٸ��ϴ�.\n");

			return 0;

		}

	}

	printf("�� ������ ���� �����ϴ�.\n");

	fclose(fp1);
	fclose(fp2);
}