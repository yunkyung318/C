#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu()
{
	printf("===============================\n");
	printf("             MENU              \n");
	printf("===============================\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ������\n");
	printf("5. ������\n");
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
		printf("���ϴ� �޴��� �����Ͻÿ� : ");
		scanf("%d", &choice);

		printf("���� 2���� �Է��Ͻÿ� : ");
		scanf("%d %d", &x, &y);

		switch (choice)
		{
		case 1:
			printf("������ : %d\n", add(x, y));
			break;
		case 2:
			printf("������ : %d\n", mul(x, y));
			break;
		case 3:
			printf("������ : %d\n", sub(x, y));
			break;
		case 4:
			printf("������ : %d\n", div(x, y));
			break;
		case 5:
			printf("������ : %d\n", rest(x, y));
			break;
		default:
			break;
		}

		printf("����Ϸ��� y�� �����ÿ� : ");
		scanf(" %c", &c);
	} while (c == 'y');
}