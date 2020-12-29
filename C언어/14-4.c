#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void pr_str_array(char **dp, int size)
{
	for (int i = 0; i < size; i++)
		printf("%s\n", *(dp + i));
}

void main()
{
	char *p[SIZE] = {
		"A bad shearer never had a good sickle",
		"A bad workman (always) blames his tools",
		"A bad workman quarrels with his tools",
		"A bad thing never dies",
		"The truth will always prevail",
		"The truth will come to light",
		"what's done in darkness wil come to light",
		"Well begun is half done",
		"A big fish must swim in deep waters",
		"It's raining cats and dogs" };

	pr_str_array(p, SIZE);
}