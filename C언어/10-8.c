#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <math.h>

void main()
{
	int array[10];
	double ave = 0;
	double sum = 0;
	double dev = 0;

	for (int i = 0; i < 10; i++) {
		printf("�����͸� �Է��Ͻÿ� : ");
		scanf("%d", &array[i]);
		ave += array[i];
	}

	sum = ave / 10.0;

	for (int i = 0; i < 10; i++)
		dev += (array[i] - ave) * (array[i] - ave);
	dev = sqrt(dev / 10.0);

	printf("��հ��� %lf\n", sum);
	printf("ǥ���������� %lf\n", dev);
}