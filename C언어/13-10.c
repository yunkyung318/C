#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

typedef struct {
	int num;
	char name[10];
	char phone[20];
	int age;
}Employee;

void main()
{
	Employee employ[SIZE];

	for (int i = 0; i < SIZE; i++) {
		printf("=== %d��° �������� === \n", i + 1);

		printf(" ��    �� : ");       
		scanf("%d", &employ[i].num);

		printf(" ��    �� : ");
		scanf("%s",employ[i].name);

		printf(" ��ȭ��ȣ : ");
		scanf("%s",employ[i].phone);

		printf(" ��    �� : ");
		scanf("%d", &employ[i].age);
	}

	for (int i = 0; i < SIZE; i++) {
		if (employ[i].age >= 20 && employ[i].age <= 30) {
			printf(" ��� = %d, ", employ[i].num);
			printf(" �̸� = %s, ", employ[i].name);
			printf(" ��ȭ��ȣ = %s, ", employ[i].phone);
			printf(" ���� = %d", employ[i].age);
			printf("\n");
		}
	}
}