#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x,num;
	
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);

	printf("2�� ���ϰ� ���� Ƚ�� : ");
	scanf("%d", &num);

	printf("%d<<%d�� �� : %d", x, num, x << num);
}