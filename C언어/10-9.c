#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main()
{
	int a[3][10] = { 0 };
	int i, j;
	srand((unsigned)time(NULL));

	printf("           ");
	for (int i = 0; i < 10; i++)
		printf("   학생%d", i + 1);
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		printf("시험 #%d => ", i+1);
		for (j = 0; j < 10; j++)
		{
			a[i][j] = rand() % 101;
			printf("%7d ", a[i][j]);
		}
		printf("\n\n");
	}

	for (i = 0; i < 3; i++)
	{
		int max = 0, min = 100;
		for (j = 0; j < 10; j++)
		{
			if (max < a[i][j])
				max = a[i][j];

			if (min > a[i][j])
				min = a[i][j];	
		}	
		printf("시험 #%d의 최대점수 = %d\n", i + 1, max);
		printf("시험 #%d의 최저점수 = %d\n\n", i + 1, min);
	}
}