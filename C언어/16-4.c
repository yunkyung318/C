#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define VOLUME(r,h) ((r)*(r)*(h)*(3.14))

void main()
{
	int r, h;
	
	printf("원기둥의 반지름 : ");
	scanf("%d", &r);
	
	printf("원기둥의 높이 : ");
	scanf("%d", &h);
	
	printf("원기둥의 부피 : %lf\n", VOLUME(r, h));
}