#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void b_rand(int coin)
{
	int result;
	result = rand() % 2;
	if (result == coin)
		printf("�¾ҽ��ϴ�.\n");
	else
		printf("Ʋ�Ƚ��ϴ�.\n");
}

void main()
{
	int talk;
	char ch;
	srand((unsigned)time(NULL));

	while (1)
	{
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0):");
		scanf("%d", &talk);

		b_rand(talk);

		printf("����Ͻðڽ��ϱ�?(y �Ǵ� n):");
		scanf(" %c", &ch);

		if (ch == 'y')
			continue;
		else if (ch == 'n')
			break;
	}
}