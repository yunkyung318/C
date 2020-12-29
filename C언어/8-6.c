#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int even(int n)
{
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}

int absolute(int n)
{
	return (int)fabs(n);
}

int sign(int n)
{
	if (n < 0)
		return -1;
	else if (n > 1)
		return 1;
	else
		return 0;
}

void main()
{
	int n, even_result, absolute_result, sign_result;

	printf("정수를 입력하시오 : ");
	scanf("%d", &n);
	
	even_result = even(n);
	
	if (even_result == 1)
		printf("even()의 결과 : 짝수\n");
	else
		printf("even()의 결과 : 홀수\n");

	absolute_result = absolute(n);
	printf("absolute()의 결과 : %d\n", absolute_result);

	sign_result = sign(n);

	if (sign_result == -1)
		printf("sign()의 결과 : 음수\n");
	else if (sign_result == 1)
		printf("sign()의 결과 : 양수\n");
	else
		printf("sign()의 결과 : 0\n");
}