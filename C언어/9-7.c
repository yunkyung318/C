#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void show_digit(int x)
{
	if (x > 10)
		show_digit(x / 10);

	printf("%d ", x % 10);
}

void main()
{
	int x;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);

	show_digit(x);
}