#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a[10][3] = { 0 };
	int i, j, n;

	for (i = 0; i < 10; i++)
		a[i][0] = i + 1;

	for (i = 0; i < 10; i++)
		a[i][1] = a[i][0] * a[i][0];

	for (i = 0; i < 10; i++)
		a[i][2] = a[i][0] * a[i][0] * a[i][0];

	printf(" ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	for (i = 0; i < 10; i++)
	{
		printf("ㅣ");
		for (j = 0; j < 3; j++)
			printf("%5d ㅣ", a[i][j]);
		printf("\n ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	}

	printf("정수를 입력하시오 : ");
	scanf("%d", &n);

	for (i = 0; i < 10; i++)
	{
		if (a[i][2] == n)
			printf("%d의 세제곱은 %d\n", n, i + 1);
	}
}