#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
}