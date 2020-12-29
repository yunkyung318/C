#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 5 
#define COL 5

void main()
{
	int image[ROW][COL] = {
		{0,0,130,0,0},
		{150,0,10,70,0},
		{200,120,230,40,200},
		{0,200,240,100,50},
		{10,80,160,0,240}
	};

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			if (image[i][j] < 128)
				image[i][j] = 0;
			else
				image[i][j] = 255;
		}
	}

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++)
			printf("|%5d ", image[i][j]);
		printf("|\n");
	}
}