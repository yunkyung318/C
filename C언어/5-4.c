#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int height;
	int feet;
	double inch;

	printf("Ű�� �Է��Ͻÿ� (cm) : ");
	scanf("%d", &height);

	inch = height / 2.54;
	feet = inch / 12;

	printf("%dcm�� %d��Ʈ %lf��ġ�Դϴ�.", height, feet, inch);
}