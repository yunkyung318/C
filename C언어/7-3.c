#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void  main()
{
	int i,x;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	
	printf("��� : ");
	for (i = 1; i < x; i++) {
		if (x%i == 0)
			printf("%d ", i);
	}
}