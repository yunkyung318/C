#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i, n, result = 0;

	printf("n�� ���� �Է��Ͻÿ�:");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		result += (i * i);

	printf("��갪�� %d�Դϴ�.", result);
}