#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void cal_area(double radius)
{
	double area;
	area = 3.141592*radius*radius;
	printf("원의 면적은 %lf입니다.\n", area);
}

void main()
{
	double radius;

	printf("원의 반지름을 입력하시오 : ");
	scanf("%lf", &radius);

	cal_area(radius);
}