#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i,sum=0;
	for (i = 1; i < 100; i++) {
		if (i % 3 == 0)
			sum += i;
	}
	printf("1���� 100������ ��� 3�� ����� ���� %d�Դϴ�.\n", sum);
}