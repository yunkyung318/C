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

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n);

	printf("1���� %d������ �� = %d", n, cycle(n));
}