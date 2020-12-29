#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 6

void set_max_ptr(int m[], int size, int **pmax)
{
	*pmax = m;
	for (int i = 0; i < size; i++)
	{
		if (**pmax <= *(m + i))
			**pmax = *(m + i);
	}
}

void main()
{
	int m[SIZE] = { 5,6,1,3,7,9 };
	int *pmax;

	set_max_ptr(m, SIZE, &pmax);
	printf("가장 큰 값은 %d", *pmax);
}