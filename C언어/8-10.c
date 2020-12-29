#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void b_rand(int coin)
{
	int result;
	result = rand() % 2;
	if (result == coin)
		printf("맞았습니다.\n");
	else
		printf("틀렸습니다.\n");
}

void main()
{
	int talk;
	char ch;
	srand((unsigned)time(NULL));

	while (1)
	{
		printf("앞면 또는 뒷면(1 또는 0):");
		scanf("%d", &talk);

		b_rand(talk);

		printf("계속하시겠습니까?(y 또는 n):");
		scanf(" %c", &ch);

		if (ch == 'y')
			continue;
		else if (ch == 'n')
			break;
	}
}