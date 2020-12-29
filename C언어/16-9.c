#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void main()
{
	char array[100];
	int i;

	printf("문자열을 입력하시오 : ");
	scanf("%s", array);

	printf("결과 문자열 : ");
	for (i = 0; array[i] != NULL; i++)
		printf("%c", array[i] ^ 0x20);
	printf("\n");
}