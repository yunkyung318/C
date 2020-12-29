#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i, j;

	for (i = 1; i <= 7; i++) {
		for (j = 7 - i; j > 0; j--) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}