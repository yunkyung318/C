#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define e 0.000001

double f_min(double n1, double n2) 
{
	if (n1 > n2)    
		return n2;
	else       
		return n1;
}

double f_abs(double n) 
{
	if (n >= 0)   
		return n;
	else        
		return (-n);
}

int f_equal(double n1, double n2) 
{
	double result;

	result = f_abs(n1 - n2) / f_min(n1, n2);

	if (result < e)    
		return 1;
	else         
		return 0;
}

void main() {
	double f1, f2;

	printf("실수를 입력하시오: ");
	scanf("%lf", &f1);

	printf("실수를 입력하시오: ");
	scanf("%lf", &f2);

	if (f_equal(f1, f2))
		printf("두 개의 실수는 서로 같음 \n");
	else
		printf("두 개의 실수는 서로 다름 \n");
}
