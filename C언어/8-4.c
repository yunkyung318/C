#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void is_leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("%d���� 366���Դϴ�.\n", year);
	else
		printf("%d���� 365���Դϴ�.\n", year);
}

void main()
{
	int year;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &year);

	is_leap(year);
}