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
		printf("�̸��� �Է��Ͻÿ� : ");
		scanf("%s", dire[i].name);

		printf("�� ��ȭ��ȣ�� �Է��Ͻÿ� : ");
		scanf("%s", dire[i].home);

		printf("�޴��� ��ȣ�� �Է��Ͻÿ� : ");
		scanf("%s", dire[i].phone);

		printf("\n\n");
	}

	printf("�˻��� �̸��� �Է��Ͻÿ� : ");
	scanf("%s", search);

	for (int i = 0; i < SIZE; i++) {
		if (strcmp(search, dire[i].name) == 0) {
			printf("�� ��ȭ��ȣ : %s\n", dire[i].home);
			printf("�޴�ȥ ��ȣ : %s\n", dire[i].phone);
		}
	}
}