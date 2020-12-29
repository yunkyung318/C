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

	printf("문자열을 입력하시오 : ");
	scanf("%s", s);

	str_upper(s);
	printf("변화된 문자열: ");
	puts(s);
}