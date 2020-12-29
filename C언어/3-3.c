#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int height, width;
	double area;

	printf("삼각형의 밑변 : ");
	scanf("%d", &width);

	printf("삼각형의 높이 : ");
	scanf("%d", &height);

	area = width * height*0.5;
	printf("삼각형의 넓이 : %lf\n", area);
}