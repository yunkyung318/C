#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	char c;

	printf("문자를 입력하시오 : ");
	scanf("%c", &c);

	switch (c) {
	case 'a':case 'e': case 'i': case 'o':case 'u':
		printf("모음입니다.\n");
		break;
	default:
		printf("자음입니다.\n");
		break;
	}
}