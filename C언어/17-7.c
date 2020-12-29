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
	printf("1. ��ȭ ���� �߰�\n");
	printf("2. ��ȭ ���� ���\n");
	printf("3. ����\n");
	printf("-------------------------------------\n");
}

Node *insert_list(Node *list, Node *temp, Data data) 
{
	Node *node = NULL;

	if (!(node = (Node*)malloc(sizeof(Node)))) {
		printf("�޸� ���� �Ҵ� ����\n");
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
		printf("��     �� : %s\n", temp->data.title);
		printf("���� ���� : %d\n", temp->data.year);
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

		printf("��ȣ�� �����Ͻÿ� : ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("��ȭ�� ������ �Է��Ͻÿ� : ");
			scanf("%s", data.title);

			printf("��ȭ�� ���� ������ �Է��Ͻÿ� : ");
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