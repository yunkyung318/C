#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int weight, height;
	double Standard_weight;

	printf("체중과 키를 입력하세요 : ");
	scanf("%d %d", &weight, &height);

	Standard_weight = (height - 100)*0.9;

	if (Standard_weight > weight)
		printf("저체중입니다.\n");
	else if (Standard_weight < weight)
		printf("과체중입니다.\n");
	else
		printf("표준입니다.\n");
}