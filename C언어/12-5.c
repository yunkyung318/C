#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{
	int c;

	printf("문자를 입력하시오 : ");

	while ((c = getchar()) != '.')
	{
		getchar();
		if (isupper(c) == 0)
		{
			c = toupper(c);
			putchar(c);
		}
		else
		{
			c = tolower(c);
			putchar(c);
		}
		printf("\n");
		printf("문자를 입력하시오 : ");
	}
}