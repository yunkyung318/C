#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	double length,angle, radius;

	printf("거리를 입력하시오 : ");
	scanf("%lf", &length);

	printf("각도를 입력하시오 : ");
	scanf("%lf", &angle);

	radius = ((360.0 * length) / angle) / 2.0 / 3.14;
	printf("지구의 반지름은 %lf입니다.", radius);
}