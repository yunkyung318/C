#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[10];
	char phone[20];
}Data;

typedef struct {
	Data data;
	struct Node *link;
}Node;


void print_menu() 
{
	printf("------------------------------\n");
	printf("1. 초기화\n");
	printf("2. 전화 번호 추가\n");
	printf("3. 전화 번호 탐색\n");
	printf("4. 전화 번호 변경\n");
	printf("5. 종료\n");
	printf("------------------------------\n");
}

Node *search_pos(Node *list, char name[]) 
{
	Node *temp, *node;

	node = NULL;
	temp = list;

	while (temp != NULL) {
		if (strcmp(temp->data.name, name) > 0)
			break;

		node = temp;
		temp = temp->link;
	}

	return temp;
}

Node *search(Node *list, char name[]) 
{
	Node *temp;

	temp = list;

	while (temp != NULL) {
		if (strcmp(temp->data.name, name) == 0)
			break;

		temp = temp->link;
	}

	return temp;
}

Node *create_node(char *name, char* phone, Node *link) 
{
	Node *node;
	node = (Node *)malloc(sizeof(Node));

	if (node == NULL) {
		printf("메모리 할당 에러\n");
		exit(1);
	}

	strcpy(node->data.name, name);
	strcpy(node->data.phone, phone);
	node->link = link;

	return node;
}

void insert_node(Node **head, Node *node, Node *temp) 
{
	if (*head == NULL) {
		*head = node;
		node->link = NULL;
	}
	else if (temp == NULL) {
		node->link = (*head)->link;
		*head = node;
	}
	else {
		node->link = temp->link;
		temp->link = node;
	}
}

void main(void) 
{
	char name[30] = { '\0' };
	char phone[20] = { '\0' };
	int choice;

	Node* list = NULL;
	Node* temp = NULL;

	while (1) {
		print_menu();

		printf("번호를 입력하세요 : ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			list = NULL;
			break;

		case 2:
			printf("이름 : ");
			scanf("%s", name);

			printf("번호 : ");
			scanf("%s", phone);

			insert_node(&list, create_node(name, phone, NULL), search_pos(list, name));
			printf("추가되었습니다.\n");
			break;

		case 3:
			printf("찾을 이름을 입력하세요 : ");
			scanf("%s", name);

			temp = search(list, name);

			if (temp != NULL) {
				printf("전화 번호부를 찾았습니다.\n");
				printf("이름 : %s\n번호 : %s\n", temp->data.name,temp->data.phone);
			}
			else
				printf("데이터를 찾지 못했습니다.\n");
			break;

		case 4:
			printf("찾을 이름을 입력하세요 : ");
			scanf("%s", name);

			temp = search(list, name);

			printf("변경할 이름을 입력하세요 : ");
			scanf("%s", name);

			printf("변경할 번호를 입력하세요 : ");
			scanf("%s", phone);

			strcpy(temp->data.name, name);
			strcpy(temp->data.phone, phone);

			printf("데이터가 변경되었습니다.\n");
			break;

		case 5:
			return;

		default:
			printf("잘못 입력 하셨습니다. 다시입력해주세요.\n");
			break;
		}
	}
}
