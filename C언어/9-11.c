#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int conbination(int n, int k)
{
	if (k == 0 || k == n)
		return 1;
	else if (0 < k&&k < n)
		return conbination(n - 1, k - 1) + conbination(n - 1, k);
}

void main()
{
	int n, k;

	printf("n = ");
	scanf("%d", &n);

	printf("k = ");
	scanf("%d", &k);

	printf("%d", conbination(n, k));
}