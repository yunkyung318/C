#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

void main()
{
	FILE *fp1, *fp2;
	int buffer[SIZE];
	int i,count;
	char name1[100], name2[100];

	printf("원본 파일 이름 : ");
	scanf("%s", name1);

	printf("복사 파일 이름 : ");
	scanf("%s", name2);

	fp1 = fopen(name1, "rb");
	fp2 = fopen(name2, "rb");

	if (fp1 == NULL) {
		printf("첫번째 파일 오픈 실패\n");
		exit(1);
	}

	if (fp2 == NULL) {
		printf("두번째 파일 오픈 실패\n");
		exit(1);
	}

	while ((count = fread(buffer, sizeof(char), SIZE, fp1)) != 0) {
		fwrite(buffer, sizeof(char), count, fp2);
	}

	fclose(fp1);
	fclose(fp2);
}