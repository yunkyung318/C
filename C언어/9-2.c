#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int A, B, C, D, E, F;

int get_dice_face()
{
	static int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0;
	int j, num;

	num = (rand() % 6) + 1;

	if (num == 1)
		one++;
	else if (num == 2)
		two++;
	else if (num == 3)
		three++;
	else if (num == 4)
		four++;
	else if (num == 5)
		five++;
	else if (num == 6)
		six++;

	A = one;
	B = two;
	C = three;
	D = four;
	E = five;
	F = six;
}

void main()
{
	int i;
	srand((unsigned)time(NULL));

	for (i = 0; i < 100; i++)
		get_dice_face();

	printf("1->%d\n", A);
	printf("2->%d\n", B);
	printf("3->%d\n", C);
	printf("4->%d\n", D);
	printf("5->%d\n", E);
	printf("6->%d\n", F);
}