#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Book {
	int id;
	char title[100];
	char author[20];
};

void main()
{
	struct Book s1 = { 1,"�ٶ��� �Բ� �������","������ ��ÿ" };
	printf("{ %d,%s,%s }\n", s1.id, s1.title, s1.author);
}