#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i, n, a = 0, b = 1, c;

	printf("���° �ױ��� ���ұ��? ");
	scanf("%d", &n);

	printf("%d, %d, ", a, b);
	for (i = 1; i < n; i++)
	{
		c = a + b;
		printf("%d", c);
		a = b;
		b = c;

		if (i < n - 1)
			printf(", ");
	}
}