#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n) {
	if (n == 1)    
		return n;
	else       
		return (n * factorial(n - 1));
}

void main() {
	int n, i;
	double f = 1;

	printf("������ ����ұ��?: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		f += 1.0 / factorial(i);

	printf("���Ϸ��� ���� %lf�Դϴ�. \n", f);

	return 0;
}