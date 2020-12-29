#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#define SIZE 50

typedef struct {
	char title[SIZE];
	int year;
}Data;

typedef struct {
	Data data;
	struct Node *link;
}Node;

void menu() {
	printf("-------------------------------------\n");
	printf("1. 영화 정보 추가\n");
	printf("2. 영화 정보 출력\n");
	printf("3. 종료\n");
	printf("-------------------------------------\n");
}

Node *insert_list(Node *list, Node *temp, Data data) 
{
	Node *node = NULL;

	if (!(node = (Node*)malloc(sizeof(Node)))) {
		printf("메모리 동적 할당 오류\n");
		exit(1);
	}

	node->data = data;

	if (temp == NULL) {
		node->link = list;
		list = node;
	}
	else {
		node->link = temp->link;
		temp->link = node;
	}

	return list;
}

void print_list(Node *list) {

	Node *temp;

	for (temp = list; temp; temp = temp->link) {
		printf("-------------------------------------\n");
		printf("제     목 : %s\n", temp->data.title);
		printf("개봉 연도 : %d\n", temp->data.year);
	}
	printf("-------------------------------------\n");
}

int main(void) 
{
	Node *list = NULL;
	int choice;
	Data data;

	while (1) {
		menu();

		printf("번호를 선택하시오 : ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("영화의 제목을 입력하시오 : ");
			scanf("%s", data.title);

			printf("영화의 개봉 연도를 입력하시오 : ");
			scanf("%d", &data.year);

			list = insert_list(list, NULL, data);
			break;

		case 2:
			print_list(list);
			break;

		case 3:
			return;
		}
	}
	free(list);
}