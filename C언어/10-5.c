#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int a[10] = { 0 };
	int i, j, u, max = 0, temp = 0;

	srand((unsigned)time(NULL));

	for (i = 0; i < 100; i++)
		a[rand() % 10]++;

	for (j = 0; j < 10; j++)
	{
		printf("%d:%d\n", j, a[j]);
		if (a[j] > max)
			max = a[j];
	}

	for (u = 0; u < 10; u++)
		if (a[u] == max)
			temp = u;

	printf("가장 많이 나온 수=%d", temp);
}