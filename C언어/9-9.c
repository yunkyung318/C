#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int digit_num(int num)
{
	static int count = 0;

	if (num < 1)
		return 1;
	else
	{
		count += num % 10;
		digit_num(num / 10);
	}

	return count;
}

void main()
{
	int n;

	printf("정수를 입력하시오 : ");
	scanf("%d", &n);

	printf("자리수의 합 : %d", digit_num(n));
}