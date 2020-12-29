#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int get_response(char *prompt)
{
	if((strcmp(prompt,"yes"))==0)
		return 1;
	if ((strcmp(prompt, "no")) == 0)
		return 0;
}

void main()
{
	char s[10];
	
	printf("게임을 하시겠습니까? ");
	gets(s);

	if (get_response(s) == 1)
		printf("긍정적인 답변");
	else
		printf("부정적인 답변");
}