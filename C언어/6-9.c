#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	double x,result;

	printf("x�� ���� �Է��Ͻÿ� : ");
	scanf("%lf", &x);

	if (x <= 0.0) {
		result = (x*x) - (9.0*x) + 2.0;
		printf("f(x)�� ���� %lf", result);
	}
	else {
		result = (7 * x) + 2;
		printf("f(x)�� ���� %lf", result);
	}
}