#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int weight;
	double weight_on_moon;

	printf("몸무게를 입력하세요 (단위 : kg) : ");
	scanf("%d", &weight);

	weight_on_moon = weight * 0.17;
	printf("달에서의 몸무게는 %lf입니다.",weight_on_moon);
}