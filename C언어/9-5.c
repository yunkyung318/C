#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cycle(int n)
{
	if (n == 1)
		return n;
	else
		return n + cycle(n - 1);
}

void main()
{
	int n;

	printf("정수를 입력하시오 : ");
	scanf("%d", &n);

	printf("1부터 %d까지의 합 = %d", n, cycle(n));
}