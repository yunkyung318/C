#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tolower(char* str) {
	int i;

	for (i = 0; str[i] != NULL; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
	}
}

int main() {
	char str[100];
	char word[] = " ";
	char *token;
	char first_name[10];
	char *second_name[10];
	int i, count = 0;

	printf("성과 이름을 대문자로 입력하시오 : ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = NULL;

	tolower(str);
	token = strtok(str, word);

	for (i = 0; token != NULL; i++) {
		if (count == 0) {
			strcpy(first_name, token);
			token = strtok(NULL, word);
		}
		second_name[i] = token;
		token = strtok(NULL, word);
		count++;
	}

	for (i = 0; i < count; i++) {
		printf("%s", second_name[i]);
		if (i + 1 != count)
			printf(" ");
	}
	printf(", ");
	printf("%s \n", first_name);

	return 0;
}