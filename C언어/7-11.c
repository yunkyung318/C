#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i, n, result = 0;

	printf("n의 값을 입력하시오:");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		result += (i * i);

	printf("계산값은 %d입니다.", result);
}