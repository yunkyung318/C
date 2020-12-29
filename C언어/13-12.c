#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 52

typedef struct {
	int value;
	char suit;
}Card;

void main()
{
	Card card[SIZE];

	for (int i = 0; i < 13; i++) {
		card[i].value = i + 1;
		card[i].suit = 'c';
	}

	for (int i = 13; i < 26; i++) {
		card[i].value = i + 1;
		card[i].suit = 'd';
	}

	for (int i = 26; i < 39; i++) {
		card[i].value = i + 1;
		card[i].suit = 'h';
	}

	for (int i = 39; i < SIZE; i++) {
		card[i].value = i + 1;
		card[i].suit = 's';
	}

	for (int i = 0; i < SIZE; i++)
		printf("%d : %c\n", card[i].value, card[i].suit);
}