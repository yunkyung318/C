#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int str_upper(char *s)
{
	int i;
	for (i = 0; s[i] != NULL; i++)
	{
		if (s[i] >= 'a'&&s[i] <= 'z')
			s[i] += 'A' - 'a';
	}
}

void main()
{
	char s[SIZE];

	printf("���ڿ��� �Է��Ͻÿ� : ");
	scanf("%s", s);

	str_upper(s);
	printf("��ȭ�� ���ڿ�: ");
	puts(s);
}