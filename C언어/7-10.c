#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	double r, result = 1.0;
	int i, n;

	printf("�Ǽ��� ���� �Է��Ͻÿ�:");
	scanf("%lf", &r);

	printf("�ŵ�����Ƚ���� �Է��Ͻÿ�:");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		result *= r;

	printf("������� %lf", result);
}