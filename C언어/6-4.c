#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int choice;
	int computer;

	srand(time(NULL));
	computer = (rand() % 3) + 1;

	printf("�����Ͻÿ� (1:����, 2:����, 3:��) : ");
	scanf("%d", &choice);

	/*printf("��ǻ�� ���� : %d\n", computer);*/

	if (computer == 1) {
		if (choice == 1)
			printf("���\n");
		else if (choice == 2)
			printf("����ڰ� �̱�\n");
		else
			printf("����ڰ� ��\n");
	}
	else if (computer == 2) {
		if (choice == 1)
			printf("����ڰ� ��\n");
		else if (choice == 2)
			printf("���\n");
		else
			printf("����ڰ� �̱�\n");
	}
	else {
		if (choice == 1)
			printf("����ڰ� �̱�\n");
		else if (choice == 2)
			printf("����ڰ� ��\n");
		else
			printf("���\n");
	}
}