#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void array_add(int *A, int *B, int *C, int size)
{
	for (int i = 0; i < SIZE; i++)
		C[i] = B[i] + A[i];
}

void main()
{
	int A[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int B[SIZE] = { 0,0,0,0,0,0,0,0,0,0 };
	int C[SIZE];

	array_add(A, B, C, SIZE);
	
	printf("A[] = ");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", A[i]);

	printf("\n");

	printf("B[] = ");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", B[i]);

	printf("\n");

	printf("C[] = ");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", C[i]);
}