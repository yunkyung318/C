#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x;

	printf("정수를 입력하시오 : ");
	scanf("%d", &x);

	printf("2의 보수 : %d", ~x+1);
}