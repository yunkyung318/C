#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i = 1;
	int x,num;

	printf("정수를 입력하세요 : ");
	scanf("%d", &num);

	do {
		x = (num / i) % 10;
		printf("%d", x);
		i *= 10;
	} while (i < num);
}