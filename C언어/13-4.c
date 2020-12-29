#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct{
	double real;
	double imag;
}Complex;

void complex_add(Complex s1, Complex s2)
{
	printf("실수부 합:%lf\n", s1.real + s2.real);
	printf("허수부 합:%lfi\n", s1.imag + s2.imag);
	printf("복소수:%lf+%lfi", s1.real + s2.real, s1.imag + s2.imag);
}

void main()
{
	Complex a, b;

	printf("첫 번째 복소수의 실수부:");
	scanf("%lf", &a.real);

	printf("첫 번째 복소수의 허수부:");
	scanf("%lf", &a.imag);

	printf("두 번째 복소수의 실수부:");
	scanf("%lf", &b.real);

	printf("두 번째 복소수의 허수부:");
	scanf("%lf", &b.imag);

	complex_add(a, b);
}