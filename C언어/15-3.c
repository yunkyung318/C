#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

void main()
{
	FILE *fp1, *fp2;
	int buffer[SIZE];
	int i,count;
	char name1[100], name2[100];

	printf("���� ���� �̸� : ");
	scanf("%s", name1);

	printf("���� ���� �̸� : ");
	scanf("%s", name2);

	fp1 = fopen(name1, "rb");
	fp2 = fopen(name2, "rb");

	if (fp1 == NULL) {
		printf("ù��° ���� ���� ����\n");
		exit(1);
	}

	if (fp2 == NULL) {
		printf("�ι�° ���� ���� ����\n");
		exit(1);
	}

	while ((count = fread(buffer, sizeof(char), SIZE, fp1)) != 0) {
		fwrite(buffer, sizeof(char), count, fp2);
	}

	fclose(fp1);
	fclose(fp2);
}