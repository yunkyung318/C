#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	char op;
	int x, y;
	printf("*****************\n");
	printf("A---- Add\n");
	printf("S---- Subtract\n");
	printf("M---- Muliiply\n");
	printf("D---- Divide\n");
	printf("Q---- Quit\n");
	printf("******************\n");

	do
	{
		printf("������ �����Ͻÿ�:");
		scanf(" %c", &op);

		if (op == 'Q')
			break;

		printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�:");
		scanf("%d %d", &x, &y);

		switch (op) {
		case 'A':
			printf("%d\n", x + y);
			break;
		case 'S':
			printf("%d\n", x - y);
			break;
		case 'M':
			printf("%d\n", x*y);
			break;
		case 'D':
			printf("%d\n", x / y);
			break;
		}
	} while (1);
}