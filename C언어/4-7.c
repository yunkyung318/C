#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	double mass, speed, kenergy;

	printf("���� (kg) : ");
	scanf("%lf", &mass);

	printf("�ӵ� (m/s) : ");
	scanf("%lf", &speed);

	kenergy = 0.5*mass*speed*speed;
	printf("������� (J) : %lf", kenergy);
}