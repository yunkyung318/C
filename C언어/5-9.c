#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	double AC, BC, AE, DE;

	printf("지팡이의 높이를 입력하시오 : ");
	scanf("%lf", &BC);

	printf("지팡이 그림자의 길이를 입력하시오 : ");
	scanf("%lf", &AC);

	printf("피라미드까지의 높이를 입력하시오 : ");
	scanf("%lf", &AE);

	DE = (AE*BC) / AC;
	printf("피라미드까지의 높이는 %lf입니다.", DE);
}