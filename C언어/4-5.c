#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PYEONG 3.3058

void main()
{
	int pyeong;
	double meter;

	printf("���� �Է��ϼ��� : ");
	scanf("%d", &pyeong);

	meter = pyeong * PYEONG;
	printf("%lf�������Դϴ�.", meter);
}