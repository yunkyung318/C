#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	double AC, BC, AE, DE;

	printf("�������� ���̸� �Է��Ͻÿ� : ");
	scanf("%lf", &BC);

	printf("������ �׸����� ���̸� �Է��Ͻÿ� : ");
	scanf("%lf", &AC);

	printf("�Ƕ�̵������ ���̸� �Է��Ͻÿ� : ");
	scanf("%lf", &AE);

	DE = (AE*BC) / AC;
	printf("�Ƕ�̵������ ���̴� %lf�Դϴ�.", DE);
}