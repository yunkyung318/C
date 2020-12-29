#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int f;
	double c;

	printf("화씨를 입력하세요 : ");
	scanf("%d", &f);

	c = (5.0 / 9.0)*(f - 32.0);
	printf("섭씨값은 %lf도입니다.", c);
}