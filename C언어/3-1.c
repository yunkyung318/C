#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	double x, y, z;
	double sum=0, avg=0;

	printf("�Ǽ��� �Է��Ͻÿ� :");
	scanf("%lf", &x);
	printf("�Ǽ��� �Է��Ͻÿ� :");
	scanf("%lf", &y);
	printf("�Ǽ��� �Է��Ͻÿ� :");
	scanf("%lf", &z);

	sum = x + y + z;
	avg = sum / 3.0;

	printf("���� %lf�̰� ����� %lf�дϴ�.", sum, avg);
}