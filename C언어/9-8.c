#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int digit(int num)
{
	static int count;

	if (num < 1)
		return 1;
	else
	{
		count++;
		digit(num / 10);
	}

	return count;
}

void main()
{
	static int n;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n);

	printf("�ڸ����� ���� : %d", digit(n));
}