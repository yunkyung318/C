#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	double x, y;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf %lf", &x, &y);

	printf("%lf %lf %lf %lf\n", x + y, x - y, x*y, x / y);
}