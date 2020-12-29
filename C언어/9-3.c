#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check(int n)
{
	static int count = 0;
	int pw = 1234;

	count++;

	if (count >= 3)
		printf("로그인 시도 횟수 초과\n");

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
		printf("비밀번호:");
		scanf("%d", &pw);

		a = check(pw);

		if (a == 1)
		{
			printf("로그인 성공\n");
			break;
		}
	}
}