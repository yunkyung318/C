#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{
	int c;

	printf("���ڸ� �Է��Ͻÿ� : ");

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
		printf("���ڸ� �Է��Ͻÿ� : ");
	}
}