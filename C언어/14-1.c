#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void set_proverb(char **q, int n)
{
	char *array[10] = {
		"A bad shearer never had a good sickle",
		"A bad workman (always) blames his tools",
		"A bad workman quarrels with his tools",
		"A bad thing never dies",
		"The truth will always prevail",
		"The truth will come to light",
		"what's done in darkness wil come to light",
		"Well begun is half done",
		"A big fish must swim in deep waters",
		"It's raining cats and dogs"
	};
	*q = array[n - 1];
}

void main()
{
	int n;
	char *s;

	printf("몇번째 속담을 선택하시겠습니다?");
	scanf("%d", &n);

	set_proverb(&s, n);
	printf("selected proverb = %s\n", s);
}