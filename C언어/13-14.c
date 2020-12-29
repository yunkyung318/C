#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 50

typedef struct {
	char title[SIZE];
	char singer[SIZE];
	char location[SIZE];
	int genre;
}Mp3;

void menu()
{
	printf("==============\n");
	printf(" 1. �߰�\n");
	printf(" 2. ���\n");
	printf(" 3. �˻�\n");
	printf(" 4. ����\n");
	printf("==============\n");
}

void add(Mp3 *mp,int *num)
{
	printf("\n���� : ");
	scanf("%s", mp[*num].title);

	printf("���� : ");
	scanf("%s", mp[*num].singer);

	printf("��ġ : ");
	scanf("%s", mp[*num].location);

	printf("�帣 (0:����, 1:��, 2:Ŭ����, 3: ��ȭ����) : ");
	scanf("%d", &mp[*num].genre);

	(*num)++;
}

void print(Mp3 *mp,int *num)
{
	for (int i = 0; i < *num; i++) {
		printf("\n���� :%s\n", mp[i].title);
		printf("���� : %s\n", mp[i].singer);
		printf("��ġ : %s\n", mp[i].location);
		printf("�帣 : %d\n", mp[i].genre);
	}
	printf("\n");
}

void search(Mp3 *mp,int *num)
{
	char name[10];

	printf("� ���� �˻��Ͻðڽ��ϱ�? ");
	scanf("%s", name);

	for (int i = 0; i < *num; i++) {
		if (strcmp(mp[i].title, name) == 0) {
			printf("\n���� :%s\n", mp[i].title);
			printf("���� : %s\n", mp[i].singer);
			printf("��ġ : %s\n", mp[i].location);
			printf("�帣 : %d\n", mp[i].genre);
		}
	}
	printf("\n");
}

void exit()
{
	return;
}

void main()
{
	Mp3 mp[SIZE];
	int choice, num = 0;
	
	while (1) {
		menu();

		printf("�������� �Է��Ͻÿ� : ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			add(&mp,&num);
			break;
		case 2:
			print(&mp,&num);
			break;
		case 3:
			search(&mp,&num);
			break;
		case 4:
			exit();
			break;
		default:
			break;
		}
	}
}