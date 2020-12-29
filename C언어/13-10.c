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
		printf("=== %d번째 직원정보 === \n", i + 1);

		printf(" 사    번 : ");       
		scanf("%d", &employ[i].num);

		printf(" 이    름 : ");
		scanf("%s",employ[i].name);

		printf(" 전화번호 : ");
		scanf("%s",employ[i].phone);

		printf(" 나    이 : ");
		scanf("%d", &employ[i].age);
	}

	for (int i = 0; i < SIZE; i++) {
		if (employ[i].age >= 20 && employ[i].age <= 30) {
			printf(" 사번 = %d, ", employ[i].num);
			printf(" 이름 = %s, ", employ[i].name);
			printf(" 전화번호 = %s, ", employ[i].phone);
			printf(" 나이 = %d", employ[i].age);
			printf("\n");
		}
	}
}