#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double f_rand() {
	return (rand() / (double)RAND_MAX);
}

void main() {
	int i;
	srand((unsigned)time(NULL));

	for (i = 0; i < 5; i++)
		printf("%lf ", f_rand());
}