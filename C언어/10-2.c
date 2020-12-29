#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int array[10];
	int max=0, min=100;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++) {
		array[i] = (rand()%100)+1;
	}
	
	for (int i = 0; i < 10; i++) {
		if (max < array[i])
			max = array[i];
	}
	
	for (int i = 0; i < 10; i++) {
		if (min > array[i])
			min = array[i];
	}

	printf("최대값은 %d\n", max);
	printf("최소값은 %d\n", min);
}