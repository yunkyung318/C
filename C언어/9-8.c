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

	printf("정수를 입력하시오 : ");
	scanf("%d", &n);

	printf("자리수의 개수 : %d", digit(n));
}