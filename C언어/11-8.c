#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int array_sum(int *A, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += A[i];
	return sum;
}

void main()
{
	int A[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int sum = 0;

	sum = array_sum(A, SIZE);
	
	printf("A[] = ");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", A[i]);
	printf("\n");

	printf("월급의 합 = %d\n", sum);
}