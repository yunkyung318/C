#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n - 2) + fib(n - 1);
}

int main()
{
	int i, n;

	printf("¼ö¿­ : ");
	scanf("%d", &n);

	for (i = 0; i <= n; i++)
		printf("fib(%d) = %d\n", i, fib(i));
}