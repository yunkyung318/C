#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define GET_MIN(x,y,z) (x<y?(x<z?x:z):(y<z?y:z))

void main()
{
	int x = 0, y = 0, z = 0;

	printf("3개의 정수를 입력하시오:");
	scanf("%d %d %d", &x, &y, &z);

	printf("최소값은 %d입니다.\n", GET_MIN(x, y, z));
}