#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	double length,angle, radius;

	printf("�Ÿ��� �Է��Ͻÿ� : ");
	scanf("%lf", &length);

	printf("������ �Է��Ͻÿ� : ");
	scanf("%lf", &angle);

	radius = ((360.0 * length) / angle) / 2.0 / 3.14;
	printf("������ �������� %lf�Դϴ�.", radius);
}