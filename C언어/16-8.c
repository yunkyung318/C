#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define GET_bit(n,pos) ((n>>pos)&1)

void display_bit(int *array,int value)
{
	for (int i = 0; i < 32; i++)
	{
		if (GET_bit(value, i))
			array[31-i] = 1;
		else
			array[31-i] = 0;
	}
}

void main()
{
	int n, boolean, leng;
	int array[32] = { 0 };

	printf("정수값을 입력하시오 : ");
	scanf("%d", &n);

	printf("왼쪽 이동은 0, 오른쪽 이동은 1을 입력하시오 : ");
	scanf("%d", &boolean);

	printf("이동시킬 거리 : ");
	scanf("%d", &leng);

	printf("이동 전 : ");
	display_bit(array,n);
	
	for (int i = 0; i < 32; i++)
		printf("%d", array[i]);
	printf("\n");

	if (boolean == 0)
		n <<= leng;
	else
		n >>= leng;

	printf("이동 후 : ");
	display_bit(array, n);
	for (int i = 0; i < 32; i++)
		printf("%d", array[i]);
}