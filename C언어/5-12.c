#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	char one, two, three, four;
	unsigned int result= 0x00000000;

	printf("첫번째 문자를 입력하시오 : ");
	scanf("%c", &one);
	result = result | one;

	printf("두번째 문자를 입력하시오 : ");
	scanf("%c ", &two);
	result = result << 8;
	result = result | two;

	printf("세번째 문자를 입력하시오 : ");
	scanf("%c ", &three);
	result = result << 8;
	result = result | three;

	printf("네번째 문자를 입력하시오 : ");
	scanf("%c ", &four);
	result = result << 8;
	result = result | four;
	
	printf("결과값 :%08x\n", result);
}