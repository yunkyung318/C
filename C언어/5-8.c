#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PIE 3.14

void main()
{
	double radius, area, volume;

	printf("���� �������� �Է��ϼ��� : ");
	scanf("%lf", &radius);

	area = 4.0* radius*radius*PIE;
	printf("ǥ������ %lf�Դϴ�.\n", area);

	volume = (4.0 / 3.0)*PIE*radius*radius*radius;
	printf("ü���� %lf�Դϴ�.", volume);
}