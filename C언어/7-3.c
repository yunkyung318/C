#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void  main()
{
	int i,x;

	printf("정수를 입력하시오 : ");
	scanf("%d", &x);
	
	printf("약수 : ");
	for (i = 1; i < x; i++) {
		if (x%i == 0)
			printf("%d ", i);
	}
}