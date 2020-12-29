#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int array_copy(int a[], int b[], int size)
{
	int i, j, u;

	for (i = 0; i < SIZE; i++)
		b[i] = a[i];

	for (j = 0; j < SIZE; j++)
		printf("%d ", a[j]);
	printf("\n");

	for (u = 0; u < SIZE; u++)
		printf("%d ", b[u]);
}

void main()
{
	int a[SIZE], b[SIZE];
	int i, j;

	for (i = 0; i < SIZE; i++)
		scanf("%d", &a[i]);

	for (j = 0; j < SIZE; j++)
		scanf("%d", &b[j]);

	array_copy(a, b, SIZE);
}