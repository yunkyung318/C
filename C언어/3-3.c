#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int height, width;
	double area;

	printf("�ﰢ���� �غ� : ");
	scanf("%d", &width);

	printf("�ﰢ���� ���� : ");
	scanf("%d", &height);

	area = width * height*0.5;
	printf("�ﰢ���� ���� : %lf\n", area);
}