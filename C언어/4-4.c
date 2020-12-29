#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	double w, h, d;
	double volume;

	printf("상자의 가로, 세로, 높이를 한 번에 입력 : ");
	scanf("%lf %lf %lf", &w, &h, &d);

	volume = w * h*d;
	printf("상자의 부피는 %lf입니다.", volume);
}