#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	char c;

	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%c", &c);

	switch (c) {
	case 'a':case 'e': case 'i': case 'o':case 'u':
		printf("�����Դϴ�.\n");
		break;
	default:
		printf("�����Դϴ�.\n");
		break;
	}
}