#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check(int n)
{
	static int count = 0;
	int pw = 1234;

	count++;

	if (count >= 3)
		printf("�α��� �õ� Ƚ�� �ʰ�\n");

	if (pw == n)
		return 1;
	else if (pw != n)
		return 0;
}

void main()
{
	int i, pw, a;

	for (i = 0; i < 3; i++)
	{
		printf("��й�ȣ:");
		scanf("%d", &pw);

		a = check(pw);

		if (a == 1)
		{
			printf("�α��� ����\n");
			break;
		}
	}
}