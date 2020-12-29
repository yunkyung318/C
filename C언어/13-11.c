#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 3

typedef struct {
	char name[10];
	char home[20];
	char phone[20];
}Directory;

void main()
{
	Directory dire[SIZE];
	char search[10];

	for (int i = 0; i < SIZE; i++) {
		printf("이름을 입력하시오 : ");
		scanf("%s", dire[i].name);

		printf("집 전화번호를 입력하시오 : ");
		scanf("%s", dire[i].home);

		printf("휴대폰 번호를 입력하시오 : ");
		scanf("%s", dire[i].phone);

		printf("\n\n");
	}

	printf("검색할 이름을 입력하시오 : ");
	scanf("%s", search);

	for (int i = 0; i < SIZE; i++) {
		if (strcmp(search, dire[i].name) == 0) {
			printf("집 전화번호 : %s\n", dire[i].home);
			printf("휴대혼 번호 : %s\n", dire[i].phone);
		}
	}
}