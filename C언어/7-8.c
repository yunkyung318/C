#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int num;

	do {
		printf("������ ���� (���� -1) : ");
		scanf("%d", &num);

		for (int i = 0; i < num; i++)
			printf("*");
		printf("\n");
	} while (num != -1);
}