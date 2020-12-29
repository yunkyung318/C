#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int array_equal(int a[], int b[], int size)
{
	int i;
	for (i = 0; i < SIZE; i++)
	{
		if (a[i] == b[i])
			return 1;
		else if (a[i] != b[i])
			return 0;
	}
}

void main()
{
	int a[SIZE], b[SIZE];
	int i, j;

	for (i = 0; i < SIZE; i++)
		scanf("%d", &a[i]);

	for (j = 0; j < SIZE; j++)
		scanf("%d", &b[j]);

	if (array_equal(a, b, SIZE) == 1)
		printf("두 개의 배열은 같음");
	else if (array_equal(a, b, SIZE) == 0)
		printf("두 개의 배열은 다름");
}