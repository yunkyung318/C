#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define GET_MIN(x,y,z) (x<y?(x<z?x:z):(y<z?y:z))

void main()
{
	int x = 0, y = 0, z = 0;

	printf("3���� ������ �Է��Ͻÿ�:");
	scanf("%d %d %d", &x, &y, &z);

	printf("�ּҰ��� %d�Դϴ�.\n", GET_MIN(x, y, z));
}