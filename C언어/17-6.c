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
	printf("1. �ʱ�ȭ\n");
	printf("2. ��ȭ ��ȣ �߰�\n");
	printf("3. ��ȭ ��ȣ Ž��\n");
	printf("4. ��ȭ ��ȣ ����\n");
	printf("5. ����\n");
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
		printf("�޸� �Ҵ� ����\n");
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

		printf("��ȣ�� �Է��ϼ��� : ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			list = NULL;
			break;

		case 2:
			printf("�̸� : ");
			scanf("%s", name);

			printf("��ȣ : ");
			scanf("%s", phone);

			insert_node(&list, create_node(name, phone, NULL), search_pos(list, name));
			printf("�߰��Ǿ����ϴ�.\n");
			break;

		case 3:
			printf("ã�� �̸��� �Է��ϼ��� : ");
			scanf("%s", name);

			temp = search(list, name);

			if (temp != NULL) {
				printf("��ȭ ��ȣ�θ� ã�ҽ��ϴ�.\n");
				printf("�̸� : %s\n��ȣ : %s\n", temp->data.name,temp->data.phone);
			}
			else
				printf("�����͸� ã�� ���߽��ϴ�.\n");
			break;

		case 4:
			printf("ã�� �̸��� �Է��ϼ��� : ");
			scanf("%s", name);

			temp = search(list, name);

			printf("������ �̸��� �Է��ϼ��� : ");
			scanf("%s", name);

			printf("������ ��ȣ�� �Է��ϼ��� : ");
			scanf("%s", phone);

			strcpy(temp->data.name, name);
			strcpy(temp->data.phone, phone);

			printf("�����Ͱ� ����Ǿ����ϴ�.\n");
			break;

		case 5:
			return;

		default:
			printf("�߸� �Է� �ϼ̽��ϴ�. �ٽ��Է����ּ���.\n");
			break;
		}
	}
}
