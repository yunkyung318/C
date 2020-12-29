#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 3
#define COL 5

int get_sum(int array[ROW][COL], int size)
{
	int *p, *tmp;
	int sum = 0;

	p = &array[size][0];
	tmp = &array[size][COL - 1];

	while (p <= tmp)
		sum += *p++;

	return sum;
}

void main()
{
	int m[ROW][COL] = { { 10,20,30,10,20 }, { 5,10,15,20,25 }, { 2,4,6,8,10 } };
	int result[ROW] = { 0 };
	int result_sum = 0;
	
	for (int i = 0; i < ROW; i++) {
		result[i] = get_sum(m, i);
		printf("%d행의 합 : %d\n", i, result[i]);
	}

	for (int i = 0; i < ROW; i++)
		result_sum += result[i];

	printf("정수의 합 = %d\n", result_sum);
}