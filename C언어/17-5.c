#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

typedef struct {
	int num;
	struct Node *link;
}Node;

void main() {
	Node *list = NULL;
	Node *prev, *A, *next;

	while (1) {
		printf("양의 정수를 입력하시오(종료 -1) : ");
		A = (Node *)malloc(sizeof(Node));
		scanf("%d", &A->num);
		
		if ((A->num) < 0)
			break;
		
		if (list == NULL)
			list = A;
		else 
			prev->link = A;
		
		A->link = NULL;
		prev = A;
	}

	A = list;
	
	while (A != NULL) {
		printf("%d -> ", A->num);
		A = A->link;
	}

	printf("NULL");
	
	A = list;
	
	while (A != NULL) {
		next = A->link;
		free(A);
		A = next;
	}
}