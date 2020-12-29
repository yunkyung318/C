#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 3
#define COL 3

double get_average(int list[], int n)
{
	int *p, *tmp;
	int sum = 0;

	p = &list[0];
	tmp = &list[ROW - 1];

	while (p <= tmp)
		sum += *p++;

	return sum / ROW;
}

void main()
{
	int scores[ROW][COL] = { {50,70,90},
							  {40,85,60},
							  {100,55,55} };

	for (int i = 0; i < ROW; i++)
		printf("%dÇàÀÇ Æò±Õ°ª=%0.2lf\n", i, get_average(scores[i], i));
}