#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int weight;
	double weight_on_moon;

	printf("�����Ը� �Է��ϼ��� (���� : kg) : ");
	scanf("%d", &weight);

	weight_on_moon = weight * 0.17;
	printf("�޿����� �����Դ� %lf�Դϴ�.",weight_on_moon);
}