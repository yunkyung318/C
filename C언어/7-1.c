#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int num;

	printf("ī������ �ʱⰪ�� �Է��Ͻÿ� : ");
	scanf("%d", &num);

	for (num; num >0; num--) {
		printf("%d ", num);
	}
	printf("\a");
}