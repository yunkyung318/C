#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x;
	
	printf("16���� ������ �Է��Ͻÿ� : ");
	scanf("%x", &x);

	printf("8�����δ� %#o�Դϴ�.\n", x);
	printf("10�����δ� %d�Դϴ�.\n", x);
	printf("16�����δ� %#x�Դϴ�.\n", x);
}