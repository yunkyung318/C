#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int n, r, result = 1;

	printf("n�� �� : ");
	scanf("%d", &n);

	printf("r�� �� : ");
	scanf("%d", &r);

	for (int i = n; i>= (n-r-1); i--) {
		result *= i;
	}
	printf("������ ���� %d�Դϴ�.", result);
}