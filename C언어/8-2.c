#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void check_alpha(char c)
{
	if (c >= 'a'&&c <= 'z')
		printf("%c�� ���ĺ� �����Դϴ�.\n", c);
	else
		printf("%c�� ���ĺ� ���ڰ� �ƴմϴ�.\n",c);
}

void main()
{
	char c;

	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%c", &c);

	check_alpha(c);
}