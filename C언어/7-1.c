#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int num;

	printf("카운터의 초기값을 입력하시오 : ");
	scanf("%d", &num);

	for (num; num >0; num--) {
		printf("%d ", num);
	}
	printf("\a");
}