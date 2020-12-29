#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	float mile;
	double meter;
	
	printf("마일을 입력하시오 : ");
	scanf("%f", &mile);
	
	meter = mile * 1609.0;
	printf("%0.1f마일은 %lf미터입니다.", mile, meter);
}