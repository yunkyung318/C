#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

void main()
{
	int n, sum = 0;
	int *array;

	printf("������ ���� : ");
	scanf("%d", &n);

	array = (int *)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) {
		printf("���� ������ �Է��Ͻÿ� : ");
		scanf("%d", &array[i]);
	}

	for (int i = 0; i < n; i++) {
		sum += array[i];
	}

	printf("���� %d�Դϴ�.\n", sum);
	free(array);
}