#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	char one, two, three, four;
	unsigned int result= 0x00000000;

	printf("ù��° ���ڸ� �Է��Ͻÿ� : ");
	scanf("%c", &one);
	result = result | one;

	printf("�ι�° ���ڸ� �Է��Ͻÿ� : ");
	scanf("%c ", &two);
	result = result << 8;
	result = result | two;

	printf("����° ���ڸ� �Է��Ͻÿ� : ");
	scanf("%c ", &three);
	result = result << 8;
	result = result | three;

	printf("�׹�° ���ڸ� �Է��Ͻÿ� : ");
	scanf("%c ", &four);
	result = result << 8;
	result = result | four;
	
	printf("����� :%08x\n", result);
}