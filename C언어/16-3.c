#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARRAY_INIT(array,size,value) {int i;for(i=0;i<size;i++)array[i]=value;}

void main()
{
	int s[5] = { 1,2,3,4,5 };
	int value = 0;

	printf("배열의 값 지정 : ");
	scanf("%d", &value);

	ARRAY_INIT(s, 5, value);
	
	for (int i = 0; i < 5; i++)
		printf("%d ", s[i]);
}