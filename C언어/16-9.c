#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void main()
{
	char array[100];
	int i;

	printf("���ڿ��� �Է��Ͻÿ� : ");
	scanf("%s", array);

	printf("��� ���ڿ� : ");
	for (i = 0; array[i] != NULL; i++)
		printf("%c", array[i] ^ 0x20);
	printf("\n");
}