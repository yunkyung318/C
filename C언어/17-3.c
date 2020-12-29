#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

typedef struct {
	char name[10];
	char phone[20];
}Directory;

void main()
{
	Directory *dire;
	int n;

	printf("주소의 개수 : ");
	scanf("%d", &n);

	dire = (Directory *)malloc(sizeof(Directory)*n);
	for (int i = 0; i < n; i++) {
		printf("이름을 입력하시오 : ");
		scanf("%s", dire[i].name);
		printf("휴대폰 번호를 입력하시오 : ");
		scanf("%s", dire[i].phone);
	}

	printf("======================================\n");
	printf(" \t이름\t\t휴대폰 번호\n");
	printf("======================================\n");

	for (int i = 0; i < n; i++)
		printf("\t%s\t\t%s\n", dire[i].name, dire[i].phone);
	printf("=====================================\n");

	free(dire);
}