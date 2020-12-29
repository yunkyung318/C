#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x, y, z;
	int max;

	printf("3개의 정수를 입력하시오 : ");
	scanf("%d %d %d", &x, &y, &z);

	max = (x > y) ? ((x > z) ? x : y) : ((y > z) ? y : z);
	printf("최대값 : %d", max);
}