#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void round(double f)
{
	printf("반올림한 값은 %d입니다.", (int)(f + 0.5));
}

void main()
{
	double f;

	printf("실수를 입력하시오 : ");
	scanf("%lf", &f);

	round(f);
}