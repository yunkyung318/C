#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_int(int *px, int *py)
{
	scanf("%d %d", &*px, &*py);
}

void main()
{
	int px_main = 0, py_main = 0;

	printf("2���� ������ �Է��Ͻÿ�(��: 10 20) : ");
	get_int(&px_main, &py_main);

	printf("������ ���� %d", px_main + py_main);
}