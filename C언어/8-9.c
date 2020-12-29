#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand() {
	return (rand() % 2);
}

void main() {
	int i;
	srand((unsigned)time(NULL));

	for (i = 0; i < 5; i++)
		printf("%d ", b_rand());

	return 0;
}