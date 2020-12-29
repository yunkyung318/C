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

	printf("�������� �Է��Ͻÿ� : ");
	scanf("%d", &n);

	printf("���� �̵��� 0, ������ �̵��� 1�� �Է��Ͻÿ� : ");
	scanf("%d", &boolean);

	printf("�̵���ų �Ÿ� : ");
	scanf("%d", &leng);

	printf("�̵� �� : ");
	display_bit(array,n);
	
	for (int i = 0; i < 32; i++)
		printf("%d", array[i]);
	printf("\n");

	if (boolean == 0)
		n <<= leng;
	else
		n >>= leng;

	printf("�̵� �� : ");
	display_bit(array, n);
	for (int i = 0; i < 32; i++)
		printf("%d", array[i]);
}