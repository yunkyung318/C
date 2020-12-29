#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

void main()
{
	int n, sum = 0;
	int *array;

	printf("정수의 개수 : ");
	scanf("%d", &n);

	array = (int *)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) {
		printf("양의 정수를 입력하시오 : ");
		scanf("%d", &array[i]);
	}

	for (int i = 0; i < n; i++) {
		sum += array[i];
	}

	printf("합은 %d입니다.\n", sum);
	free(array);
}