#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void display(char *arr) {
	int i;
	for (i = 0; arr[i] != NULL; i++)
		printf("%c", arr[i]);
}

void main() {
	char array[100], key;
	int i;

	key = 0x49;

	printf("��ȣ�� �Է��ϼ���,: ");
	gets(array);

	display(array);
	for (i = 0; array[i] != NULL; i++)
		array[i] = array[i] ^ key;
	printf(" �� ");
	display(array);
	printf(" �� ��ȣȭ\n");

	display(array);
	for (i = 0; array[i] != NULL; i++)
		array[i] = array[i] ^ key;
	printf(" �� ");
	display(array);
	printf(" �� ��ȣȭ\n");
}
