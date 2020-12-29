#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int base, int power_rasied)
{
	if (power_rasied == 1) 
		return base;
	else 
		return base * (power(base, power_rasied - 1));
}

void main()
{
	int base, p_r;

	printf("¹Ø¼ö : ");
	scanf("%d", &base);

	printf("Áö¼ö : ");
	scanf("%d", &p_r);

	printf("%d^%d=%d", base, p_r, power(base, p_r));
}