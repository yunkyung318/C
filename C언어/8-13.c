#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_multiple(int n, int m)
{
	if (n%m == 0)
		return 1;
	else
		return 0;
}

void main()
{
	int n, m, result;

	printf("ù��° ������ �Է��Ͻÿ� : ");
	scanf("%d", &n);

	printf("�ι�° ������ �Է��Ͻÿ� : ");
	scanf("%d", &m);

	result = is_multiple(n, m);

	if (result == 1)
		printf("%d�� %d�� ����Դϴ�.\n", n, m);
	else
		printf("%d�� %d�� ����� �ƴմϴ�.\n", n, m);
}