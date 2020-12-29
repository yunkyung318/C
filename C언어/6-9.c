#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	double x,result;

	printf("x의 값을 입력하시오 : ");
	scanf("%lf", &x);

	if (x <= 0.0) {
		result = (x*x) - (9.0*x) + 2.0;
		printf("f(x)의 값은 %lf", result);
	}
	else {
		result = (7 * x) + 2;
		printf("f(x)의 값은 %lf", result);
	}
}