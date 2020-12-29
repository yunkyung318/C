#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 3

void sort_strings(char *s[], int size)
{
	int i, j, least;
	char *temp;

	for (i = 0; i < size; i++) {
		least = i;

		for (j = i + 1; j < size; j++) {
			if (strcmp(s[j], s[least]) < 0)
				least = j;
		}

		temp = s[i];
		s[i] = s[least];
		s[least] = temp;
	}
}

void main()
{
	char *alpa[SIZE] = { {"src"},{"dst"},{"copy"} };

	sort_strings(alpa, SIZE);
	
	for (int i = 0; i < SIZE; i++)
		printf("%s\n", alpa[i]);
}