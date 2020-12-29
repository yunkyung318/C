#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Book {
	int id;
	char title[100];
	char author[20];
};

void main()
{
	struct Book s1 = { 1,"바람과 함께 사라지다","마가렛 미첼" };
	printf("{ %d,%s,%s }\n", s1.id, s1.title, s1.author);
}