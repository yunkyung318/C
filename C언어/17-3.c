#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

typedef struct {
	char name[10];
	char phone[20];
}Directory;

void main()
{
	Directory *dire;
	int n;

	printf("�ּ��� ���� : ");
	scanf("%d", &n);

	dire = (Directory *)malloc(sizeof(Directory)*n);
	for (int i = 0; i < n; i++) {
		printf("�̸��� �Է��Ͻÿ� : ");
		scanf("%s", dire[i].name);
		printf("�޴��� ��ȣ�� �Է��Ͻÿ� : ");
		scanf("%s", dire[i].phone);
	}

	printf("======================================\n");
	printf(" \t�̸�\t\t�޴��� ��ȣ\n");
	printf("======================================\n");

	for (int i = 0; i < n; i++)
		printf("\t%s\t\t%s\n", dire[i].name, dire[i].phone);
	printf("=====================================\n");

	free(dire);
}