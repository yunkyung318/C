#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_int(int *px, int *py)
{
	scanf("%d %d", &*px, &*py);
}

void main()
{
	int px_main = 0, py_main = 0;

	printf("2개의 정수를 입력하시오(예: 10 20) : ");
	get_int(&px_main, &py_main);

	printf("정수의 합은 %d", px_main + py_main);
}