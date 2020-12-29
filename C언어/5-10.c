#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x, y;

	printf("x좌표를 입력하시오 : ");
	scanf("%d", &x);

	printf("y좌표를 입력하시오 : ");
	scanf("%d", &y);

	(x > 0 && y > 0) ? printf("1사분면\n") : printf("");
	(x < 0 && y > 0) ? printf("2사분면\n") : printf("");
	(x < 0 && y < 0) ? printf("3사분면\n") : printf("");
	(x > 0 && y < 0) ? printf("4사분면\n") : printf("");
}