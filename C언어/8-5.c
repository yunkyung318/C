#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void round(double f)
{
	printf("�ݿø��� ���� %d�Դϴ�.", (int)(f + 0.5));
}

void main()
{
	double f;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf", &f);

	round(f);
}