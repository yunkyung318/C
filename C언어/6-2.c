#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x, y;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &y);

	if (x%y == 0)
		printf("����Դϴ�.\n");
	else
		printf("����� �ƴմϴ�.\n");
}