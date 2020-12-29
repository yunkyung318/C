#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define HEIGHT 3
#define WIDTH 3

void array_copy(int src[][WIDTH], int dst[][WIDTH])
{
	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++)
			dst[i][j] = src[i][j];
	}
}

void main()
{
	int src[HEIGHT][WIDTH] = { {100,30,67},
								{89,50,12},
								{19,60,90} };
	int dst[HEIGHT][WIDTH];

	printf("< 원본 2차원 배열 >\n");
	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++)
			printf("%d ", src[i][j]);
		printf("\n");
	}

	array_copy(src, dst);

	printf("< 복사본 2차원 배열 >\n");
	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++)
			printf("%d ", dst[i][j]);
		printf("\n");
	}
}