#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	double w, h, d;
	double volume;

	printf("������ ����, ����, ���̸� �� ���� �Է� : ");
	scanf("%lf %lf %lf", &w, &h, &d);

	volume = w * h*d;
	printf("������ ���Ǵ� %lf�Դϴ�.", volume);
}