#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x, y;
	
	printf("�� ���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &x, &y);

	printf("�� : %d, ������ : %d", x / y, x%y);
}