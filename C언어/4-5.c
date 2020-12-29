#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PYEONG 3.3058

void main()
{
	int pyeong;
	double meter;

	printf("평을 입력하세요 : ");
	scanf("%d", &pyeong);

	meter = pyeong * PYEONG;
	printf("%lf평방미터입니다.", meter);
}