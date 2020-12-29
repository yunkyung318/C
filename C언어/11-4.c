#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void array_point(int *A, int size)
{
	printf("A[] = { ");
	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
		if (i + 1 != size)
			printf(", ");
	}
	printf(" }\n");
}

void main()
{
	int a[10] = { 1,2,3,4,5,6 };
	array_point(a, sizeof(a) / sizeof(a[0]));
}