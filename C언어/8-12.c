#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_value(int n)
{
	for (int i = 0; i < n; i++)
		printf("*");
	printf("\n");
}

void main()
{
	int n;

	do {
		printf("���� �Է��Ͻÿ� (����� ����) : ");
		scanf("%d", &n);
	
		if (n < 0)
			break;
		
		print_value(n);
	} while (1);
}