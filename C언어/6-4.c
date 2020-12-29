#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int choice;
	int computer;

	srand(time(NULL));
	computer = (rand() % 3) + 1;

	printf("선택하시오 (1:가위, 2:바위, 3:보) : ");
	scanf("%d", &choice);

	/*printf("컴퓨터 선택 : %d\n", computer);*/

	if (computer == 1) {
		if (choice == 1)
			printf("비김\n");
		else if (choice == 2)
			printf("사용자가 이김\n");
		else
			printf("사용자가 짐\n");
	}
	else if (computer == 2) {
		if (choice == 1)
			printf("사용자가 짐\n");
		else if (choice == 2)
			printf("비김\n");
		else
			printf("사용자가 이김\n");
	}
	else {
		if (choice == 1)
			printf("사용자가 이김\n");
		else if (choice == 2)
			printf("사용자가 짐\n");
		else
			printf("비김\n");
	}
}