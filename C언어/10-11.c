#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int place[10] = {1,2,3,4,5,4,3,2,1,3};
	int num;

	printf("��ǰ ��ȣ�� �Է��Ͻÿ� : ");
	scanf("%d", &num);

	printf("��ǰ ��ȣ %d�� ��ġ�� %d�Դϴ�.", num, place[num-1]);
}