#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x, y;
	
	printf("두 개의 정수를 입력하시오 : ");
	scanf("%d %d", &x, &y);

	printf("몫 : %d, 나머지 : %d", x / y, x%y);
}