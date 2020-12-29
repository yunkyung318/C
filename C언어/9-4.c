#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random()
{
	static int inited = 0;

	if (inited == 0)
	{
		printf("초기화 실행\n");
		srand((unsigned int)time(NULL));
		inited = 1;
	}
	else
		return rand();
}

void main()
{
	int  i;
	for (i = 0; i < 3; i++)
		printf("%d\n", get_random());
}