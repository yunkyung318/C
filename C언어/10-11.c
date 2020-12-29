#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int place[10] = {1,2,3,4,5,4,3,2,1,3};
	int num;

	printf("상품 번호를 입력하시오 : ");
	scanf("%d", &num);

	printf("상품 번호 %d의 위치는 %d입니다.", num, place[num-1]);
}