#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double square(double x)
{
	printf("�־��� ���� %lf�� ������ %lf�Դϴ�.\n", x, x*x);
}

void main()
{
	double x;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%lf", &x);

	square(x);
}