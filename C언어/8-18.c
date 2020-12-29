#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu()
{
	printf("===============================\n");
	printf("             MENU              \n");
	printf("===============================\n");
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 곱셈\n");
	printf("4. 나눗셈\n");
	printf("5. 나머지\n");
	printf("===============================\n");
}

int add(int x, int y)
{
	return x + y;
}

int mul(int x, int y)
{
	return x - y;
}

int sub(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}

int rest(int x, int y)
{
	return x % y;
}

void main()
{
	int choice, x, y;
	char c;

	menu();

	do {
		printf("원하는 메뉴를 선택하시오 : ");
		scanf("%d", &choice);

		printf("숫자 2개를 입력하시오 : ");
		scanf("%d %d", &x, &y);

		switch (choice)
		{
		case 1:
			printf("연산결과 : %d\n", add(x, y));
			break;
		case 2:
			printf("연산결과 : %d\n", mul(x, y));
			break;
		case 3:
			printf("연산결과 : %d\n", sub(x, y));
			break;
		case 4:
			printf("연산결과 : %d\n", div(x, y));
			break;
		case 5:
			printf("연산결과 : %d\n", rest(x, y));
			break;
		default:
			break;
		}

		printf("계속하려면 y를 누르시오 : ");
		scanf(" %c", &c);
	} while (c == 'y');
}