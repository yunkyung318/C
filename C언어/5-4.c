#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int height;
	int feet;
	double inch;

	printf("키를 입력하시오 (cm) : ");
	scanf("%d", &height);

	inch = height / 2.54;
	feet = inch / 12;

	printf("%dcm는 %d피트 %lf인치입니다.", height, feet, inch);
}