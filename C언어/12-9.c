#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
	char s[50];

	printf("�ؽ�Ʈ�� �Է��Ͻÿ� : ");
	gets_s(s, 50);

	if (islower(s[0]) != 0)
		s[0] = toupper(s[0]);
	
	if (ispunct(s[strlen(s)]) == 0)
		s[strlen(s)] = '.';
	printf("������ �ؽ�Ʈ:%s",s);
}