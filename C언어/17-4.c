#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

char *get_word()
{
	char *s = (char *)malloc(50);

	if (s == NULL) {
		printf("메모리 할당 오류\n");
		exit(1);
	}

	printf("단어를 입력하시오(최대 50글자) : ");
	scanf("%s", s);
	
	return s;
}

void main()
{
	char *s;
	s = get_word();
	
	printf("동적 메모리에 저장된 단어는 %s입니다.\n", s);
	free(s);
}