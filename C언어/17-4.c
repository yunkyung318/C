#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

char *get_word()
{
	char *s = (char *)malloc(50);

	if (s == NULL) {
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}

	printf("�ܾ �Է��Ͻÿ�(�ִ� 50����) : ");
	scanf("%s", s);
	
	return s;
}

void main()
{
	char *s;
	s = get_word();
	
	printf("���� �޸𸮿� ����� �ܾ�� %s�Դϴ�.\n", s);
	free(s);
}