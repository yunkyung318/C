#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	double x,result;
	
	printf("�Ǽ��� �Է��ϼ��� : ");
	scanf("%lf", &x);

	result = (3 * x*x) + (7 * x) + 11.0;
	printf("���׽��� ���� %lf", result);
}