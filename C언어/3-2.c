#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	float mile;
	double meter;
	
	printf("������ �Է��Ͻÿ� : ");
	scanf("%f", &mile);
	
	meter = mile * 1609.0;
	printf("%0.1f������ %lf�����Դϴ�.", mile, meter);
}