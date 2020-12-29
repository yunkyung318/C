#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void tower(char* str) 
{
	int i;

	for (i = 0; str[i] != NULL; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
	}
}

void check_palindrome(char* str) {
	int i, length, equal = 0;

	length = strlen(str);

	for (i = 0; ; i++) {
		if (i < length - i)
			if (str[i] != str[length - i - 1])
				equal++;
			else
				break;
	}
	if (equal == 0)
		printf("회문입니다.\n");
	else
		printf("회문이 아닙니다.\n");
}

void main() {
	char str[100];

	printf("문자열을 입력하시오: ");
	gets(str);

	tower(str);
	check_palindrome(str);
}