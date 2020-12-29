#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#define SIZE 100

void main()
{
	int n = 0;
	char** A = NULL;

	printf("문자열의 개수: ");
	scanf("%d", &n);

	if ((A = malloc(n * sizeof(char *))) != NULL) {
		for (int i = 0; i < n; i++) {
			A[i] = (char*)malloc(SIZE);
		}
	}

	printf("[ ");
	for (int i = 0; i < n; i++) {
		sprintf(A[i], "%d", i);
	}

	for (int i = 0; i < n; i++) {
		printf("\"문자열%s\" ", A[i]);
	}

	printf(" ]");
	for (int i = 0; i < n; i++) {
		free(A[i]);
	}
}