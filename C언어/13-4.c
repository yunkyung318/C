#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct{
	double real;
	double imag;
}Complex;

void complex_add(Complex s1, Complex s2)
{
	printf("�Ǽ��� ��:%lf\n", s1.real + s2.real);
	printf("����� ��:%lfi\n", s1.imag + s2.imag);
	printf("���Ҽ�:%lf+%lfi", s1.real + s2.real, s1.imag + s2.imag);
}

void main()
{
	Complex a, b;

	printf("ù ��° ���Ҽ��� �Ǽ���:");
	scanf("%lf", &a.real);

	printf("ù ��° ���Ҽ��� �����:");
	scanf("%lf", &a.imag);

	printf("�� ��° ���Ҽ��� �Ǽ���:");
	scanf("%lf", &b.real);

	printf("�� ��° ���Ҽ��� �����:");
	scanf("%lf", &b.imag);

	complex_add(a, b);
}