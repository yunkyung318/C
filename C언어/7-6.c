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
		printf("연산을 선택하시오:");
		scanf(" %c", &op);

		if (op == 'Q')
			break;

		printf("두수를 공백으로 분리하여 입력하시오:");
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