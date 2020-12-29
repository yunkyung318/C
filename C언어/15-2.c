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

	printf("첫번쨰 파일 이름 : ");
	scanf("%s", name1);

	printf("두번째 파일 이름 : ");
	scanf("%s",name2);

	fp1 = fopen("sample.txt", "r");
	fp2 = fopen("sample2.txt", "r");

	if (fp1 == NULL) {
		printf("첫번째 파일 오픈 실패\n");
		exit(1);
	}

	if (fp2 == NULL) {
		printf("두번째 파일 오픈 실패\n");
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