#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	double mass, speed, kenergy;

	printf("질량 (kg) : ");
	scanf("%lf", &mass);

	printf("속도 (m/s) : ");
	scanf("%lf", &speed);

	kenergy = 0.5*mass*speed*speed;
	printf("운동에너지 (J) : %lf", kenergy);
}