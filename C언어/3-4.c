#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int f;
	double c;

	printf("ȭ���� �Է��ϼ��� : ");
	scanf("%d", &f);

	c = (5.0 / 9.0)*(f - 32.0);
	printf("�������� %lf���Դϴ�.", c);
}