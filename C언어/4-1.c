#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	double x;
	
	printf("실수를 입력하시오 : ");
	scanf("%lf", &x);

	printf("실수 형식으로는 %lf입니다.\n", x);
	printf("지수형식으로는 %e입니다.\n", x);
}