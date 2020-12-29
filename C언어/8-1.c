#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double square(double x)
{
	printf("주어진 정수 %lf의 제곱은 %lf입니다.\n", x, x*x);
}

void main()
{
	double x;

	printf("정수를 입력하시오 : ");
	scanf("%lf", &x);

	square(x);
}