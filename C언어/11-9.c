#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int search(int *A, int size, int search_value)
{
	for (int i = 0; i < size; i++) {
		if (A[i] == search_value)
			return i;
	}
}

void main()
{
	int A[SIZE] = { 300,200,700,900,500,400,100,600,800,50 };
	int key, value;

	printf("�ݾ� �Է� : ");
	scanf("%d", &value);

	key = search(A, SIZE, value);
	printf("������ %d�� ����� �ε��� = %d", value, key);
}