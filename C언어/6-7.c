#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int weight, height;
	double Standard_weight;

	printf("ü�߰� Ű�� �Է��ϼ��� : ");
	scanf("%d %d", &weight, &height);

	Standard_weight = (height - 100)*0.9;

	if (Standard_weight > weight)
		printf("��ü���Դϴ�.\n");
	else if (Standard_weight < weight)
		printf("��ü���Դϴ�.\n");
	else
		printf("ǥ���Դϴ�.\n");
}