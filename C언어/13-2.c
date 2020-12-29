#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Account {
	int num;
	char name[20];
	int balance;
};

void main()
{
	struct Account s = { 1,"ȫ�浿",100000 };
	printf("{ %d,%s,%d }\n", s.num, s.name, s.balance);
}