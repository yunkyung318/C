#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_multiple(int n, int m)
{
	if (n%m == 0)
		return 1;
	else
		return 0;
}

void main()
{
	int n, m, result;

	printf("첫번째 정수를 입력하시오 : ");
	scanf("%d", &n);

	printf("두번째 정수를 입력하시오 : ");
	scanf("%d", &m);

	result = is_multiple(n, m);

	if (result == 1)
		printf("%d은 %d의 배수입니다.\n", n, m);
	else
		printf("%d은 %d의 배수가 아닙니다.\n", n, m);
}