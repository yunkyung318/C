#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int n) {
	int i;

	if (n == 1) 
		return 0;

	for (i = 2; i < n; i++)
		if (n % i == 0)    
			return 0;
	return 1;
}

void main() {
	int i;

	for (i = 2; i <= 100; i++)
		if (is_prime(i))
			printf("%d ", i);
	printf("\n");
}