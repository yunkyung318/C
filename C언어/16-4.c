#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define VOLUME(r,h) ((r)*(r)*(h)*(3.14))

void main()
{
	int r, h;
	
	printf("������� ������ : ");
	scanf("%d", &r);
	
	printf("������� ���� : ");
	scanf("%d", &h);
	
	printf("������� ���� : %lf\n", VOLUME(r, h));
}