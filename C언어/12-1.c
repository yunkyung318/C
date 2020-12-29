#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	char c;
	
	printf("문자를 입력하시오 : ");
	scanf("%c", &c);

	printf("아스키 코드값 = %d", c);
}