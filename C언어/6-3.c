#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x, y, z;

	printf("3���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d %d", &x, &y, &z);

	if (x < y) {
		if (x < z)
			printf("���� ���� ������ %d�Դϴ�.\n", x);
		else
			printf("���� ���� ������ %d�Դϴ�.\n", z);
	}
	else {
		if (y < z)
			printf("���� ���� ������ %d�Դϴ�.\n", y);
		else
			printf("���� ���� ������ %d�Դϴ�.\n", z);
	}
}