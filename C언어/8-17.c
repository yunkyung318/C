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

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &f1);

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &f2);

	if (f_equal(f1, f2))
		printf("�� ���� �Ǽ��� ���� ���� \n");
	else
		printf("�� ���� �Ǽ��� ���� �ٸ� \n");
}
