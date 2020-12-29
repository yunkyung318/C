#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double recursive(int n)
{
	if (n == 1)
		return n;
	else
		return 1.0 / n + recursive(n - 1);
}

void main()
{
	int n;
	
	printf("정수를 입력하시오 : ");
	scanf("%d", &n);

	printf("%lf", recursive(n));
}