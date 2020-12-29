#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SET_BIT(n,pos) ((n)|=(1<<(pos)))
#define CLR_BIT(n,pos) ((n)&=(~(1)<<(pos)))
#define GET_BIT(n,pos) ((n>>pos)&1)

void main()
{
	int num;

	printf("정수 입력 : ");
	scanf("%d", &num);

	SET_BIT(num, 1);
	printf("%d\n", num);

	CLR_BIT(num, 1);
	printf("%d\n", num);

	GET_BIT(num, 1);
	printf("%d\n", num);
}