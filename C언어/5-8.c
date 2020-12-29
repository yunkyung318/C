#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PIE 3.14

void main()
{
	double radius, area, volume;

	printf("구의 반지름을 입력하세요 : ");
	scanf("%lf", &radius);

	area = 4.0* radius*radius*PIE;
	printf("표면적은 %lf입니다.\n", area);

	volume = (4.0 / 3.0)*PIE*radius*radius*radius;
	printf("체적은 %lf입니다.", volume);
}