#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void  main() {
	char str[100];
	int i, count = 0;

	printf("텍스트를 입력하시오: ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = NULL;

	for (i = 0; str[i] != NULL; i++)
		if (str[i] == ',' || str[i] == '.')
			count++;
	printf("구두점의 개수는 %d입니다. \n", count);
}