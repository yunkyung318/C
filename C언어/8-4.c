#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void is_leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("%d년은 366일입니다.\n", year);
	else
		printf("%d년은 365일입니다.\n", year);
}

void main()
{
	int year;

	printf("연도를 입력하시오 : ");
	scanf("%d", &year);

	is_leap(year);
}