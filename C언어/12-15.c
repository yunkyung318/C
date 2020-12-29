#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void menu() {
	char ch[10];
	int num1, num2, result;

	printf("연산을 입력하시오: ");
	scanf("%s %d %d", ch, &num1, &num2);

	if (!strcmp(ch, "add"))
		result = add(num1, num2);
	else if (!strcmp(ch, "sub"))
		result = sub(num1, num2);
	else if (!strcmp(ch, "mul"))
		result = mul(num1, num2);
	else if (!strcmp(ch, "div"))
		result = div(num1, num2);
	printf("연산의 결과: %d \n", result);
}

int add(int n1, int n2) {
	return (n1 + n2);
}

int sub(int n1, int n2) {
	return (n1 - n2);
}

int mul(int n1, int n2) {
	return (n1*n2);
}

int div(int n1, int n2) {
	return (n1 / n2);
}

void main() {
	menu();
}