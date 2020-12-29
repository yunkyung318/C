#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define GET_bit(n,pos) ((n>>pos)&1)

void display_bit(int value)
{
	for (int i = 0; i < 32; i++)
	{
		if (GET_bit(value, i))
			printf("1");
		else
			printf("0");
	}
}

void main()
{
	int n;

	printf("정수값을 입력하시오 : ");
	scanf("%d", &n);

	display_bit(n);
}