#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int x, int y) {
	static int count;

	count++;

	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);

	return (x + y);
}

int sub(int x, int y) {
	static int count;

	count++;

	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);

	return (x - y);
}

int mul(int x, int y) {
	static int count;

	count++;

	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);

	return (x*y);
}

int div(int x, int y) {
	static int count;

	count++;

	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count);

	return (x / y);
}

void main(void) {
	char op;
	int x, y;
	int i;

	for (i = 0; i < 10; i++) {
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d %c %d", &x, &op, &y);

		if (op == '+')
			printf("���� ���: %d \n", add(x, y)); 
		else if (op == '-')
			printf("���� ���: %d \n", sub(x, y)); 
		else if (op == '*')
			printf("���� ���: %d \n", mul(x, y)); 
		else if (op == '/')
			printf("���� ���: %d \n", div(x, y));
		else
			printf("�������� �ʴ� �������Դϴ�. \n");
	}
}
