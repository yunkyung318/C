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
		printf("ȸ���Դϴ�.\n");
	else
		printf("ȸ���� �ƴմϴ�.\n");
}

void main() {
	char str[100];

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets(str);

	tower(str);
	check_palindrome(str);
}