#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void convert(double *grades, double *scores, int size)
{
	for (int i = 0; i < size; i++)
		scores[i] = (grades[i] * 100.0) / 4.3;
}

void main()
{
	double grades[SIZE] = { 0.0,0.5,1.0,1.5,2.0,2.5,3.0,3.5,4.0,4.3 };
	double scores[SIZE];
	convert(grades, scores, SIZE);

	for (int i = 0; i < SIZE; i++)
		printf("%05.2lf ", grades[i]);

	printf("\n\n");

	for (int i = 0; i < SIZE; i++)
		printf("%05.2lf ", scores[i]);
}