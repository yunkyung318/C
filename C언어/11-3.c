#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void array_fill(int *A, int size)
{
	int i;
	for (i = 0; i < size; i++) {
		A[i] = rand();
	}
}

void main()
{
	int a[SIZE];
	srand((unsigned)time(NULL));
	
	array_fill(a, SIZE);

	for (int i = 0; i < SIZE; i++)
		printf("%d ", a[i]);
}