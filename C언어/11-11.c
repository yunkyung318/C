#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 4 

void merge(int *A, int *B, int *C, int size)
{
	int i, a = 0, b = 0;

	for (i = 0; i < 8; i++)
	{
		if (a < size&&b < size)
		{
			if (A[a] <= B[b])
			{
				C[i] = A[a];
				a++;
			}
			else if (A[a] > B[b])
			{
				C[i] = B[b];
				b++;
			}
		}
		else if (a == size)
		{
			C[i] = B[b];
			b++;
		}
		else if (b == size)
		{
			C[i] = A[a];
			a++;
		}
	}

	printf("A[] = ");
	for (i = 0; i < size; i++)
		printf("%3d", A[i]);
	printf("\n");

	printf("B[] = ");
	for (i = 0; i < size; i++)
		printf("%3d", B[i]);
	printf("\n");

	printf("C[] = ");
	for (i = 0; i < size * 2; i++)
		printf("%3d", C[i]);
	printf("\n");
}

void main()
{
	int A[SIZE] = { 2,5,7,8 };
	int B[SIZE] = { 1,3,4,6 };
	int C[8] = { 0 };

	merge(A, B, C, SIZE);
}