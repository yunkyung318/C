#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a[10][3] = { 0 };
	int i, j, n;

	for (i = 0; i < 10; i++)
		a[i][0] = i + 1;

	for (i = 0; i < 10; i++)
		a[i][1] = a[i][0] * a[i][0];

	for (i = 0; i < 10; i++)
		a[i][2] = a[i][0] * a[i][0] * a[i][0];

	printf(" �ѤѤѤѤѤѤѤѤѤѤѤ�\n");
	for (i = 0; i < 10; i++)
	{
		printf("��");
		for (j = 0; j < 3; j++)
			printf("%5d ��", a[i][j]);
		printf("\n �ѤѤѤѤѤѤѤѤѤѤѤ�\n");
	}

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n);

	for (i = 0; i < 10; i++)
	{
		if (a[i][2] == n)
			printf("%d�� �������� %d\n", n, i + 1);
	}
}