#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x,num;
	
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);

	printf("2를 곱하고 싶은 횟수 : ");
	scanf("%d", &num);

	printf("%d<<%d의 값 : %d", x, num, x << num);
}