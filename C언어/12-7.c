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
	
	printf("������ �Ͻðڽ��ϱ�? ");
	gets(s);

	if (get_response(s) == 1)
		printf("�������� �亯");
	else
		printf("�������� �亯");
}