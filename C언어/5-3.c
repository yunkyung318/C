#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x, y, z;
	int max;

	printf("3���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d %d", &x, &y, &z);

	max = (x > y) ? ((x > z) ? x : y) : ((y > z) ? y : z);
	printf("�ִ밪 : %d", max);
}