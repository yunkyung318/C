#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i = 1, sum = 0;

	for (;; i++)
	{
		sum += i;
		if (sum > 10000)
			break;
	}
	printf("1���� %d������ ���� %d�Դϴ�.", i - 1, sum - i);
}