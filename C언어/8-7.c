#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_tax(int income)
{
	int result = 0;
	if (income >= 1000)
		result = 1000 * 0.08 + (income - 1000)*0.1;
	else
		result = 1000 * 0.08;
	return result;
}
	
void main()
{
	int n;
	printf("�ҵ��� �Է��Ͻÿ�(����) :");
	scanf("%d", &n);

	printf("�ҵ漼�� %d�Դϴ�.", get_tax(n));
}