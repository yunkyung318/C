#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void cal_area(double radius)
{
	double area;
	area = 3.141592*radius*radius;
	printf("���� ������ %lf�Դϴ�.\n", area);
}

void main()
{
	double radius;

	printf("���� �������� �Է��Ͻÿ� : ");
	scanf("%lf", &radius);

	cal_area(radius);
}