#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PIE 3.141592

double sin_degree(double degree) {
	double radian;
	radian = (PIE * degree) / 180.0;
	return (sin(radian));
}

void main()
{
	double sin_value, degree, radian;

	for (degree = 0; degree <= 180; degree += 10)
		printf("sin(%d)ÀÇ °ªÀº %f \n", (int)degree, sin_degree(degree));
}