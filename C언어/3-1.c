#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	double x, y, z;
	double sum=0, avg=0;

	printf("실수를 입력하시오 :");
	scanf("%lf", &x);
	printf("실수를 입력하시오 :");
	scanf("%lf", &y);
	printf("실수를 입력하시오 :");
	scanf("%lf", &z);

	sum = x + y + z;
	avg = sum / 3.0;

	printf("합은 %lf이고 평균은 %lf압니다.", sum, avg);
}