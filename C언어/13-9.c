#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

typedef struct {
	char name[100];
	int calories;
}Food;

void main()
{
	Food day[SIZE];
	int total = 0;

	for (int i = 0; i < SIZE; i++) {
		printf("���� �̸� : ");
		scanf("%s", day[i].name);
		printf("���� Į�θ� : ");
		scanf("%d", &day[i].calories);
		printf("\n");
	}

	for (int i = 0; i < SIZE; i++) {
		total += day[i].calories;
	}

	printf("�� Į�θ� = %d\n", total);
}