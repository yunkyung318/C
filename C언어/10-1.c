#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int day[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

	printf("8월은 %d일까지 있습니다.\n", day[7]);
	printf("9월은 %d일까지 있습니다.\n", day[8]);
	printf("10월은 %d일까지 있습니다.\n", day[9]);
	printf("11월은 %d일까지 있습니다.\n", day[10]);
	printf("12월은 %d일까지 있습니다.\n", day[11]);
}