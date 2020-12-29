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
	printf(" 1. 추가\n");
	printf(" 2. 출력\n");
	printf(" 3. 검색\n");
	printf(" 4. 종료\n");
	printf("==============\n");
}

void add(Mp3 *mp,int *num)
{
	printf("\n제목 : ");
	scanf("%s", mp[*num].title);

	printf("가수 : ");
	scanf("%s", mp[*num].singer);

	printf("위치 : ");
	scanf("%s", mp[*num].location);

	printf("장르 (0:가요, 1:팝, 2:클래식, 3: 영화음악) : ");
	scanf("%d", &mp[*num].genre);

	(*num)++;
}

void print(Mp3 *mp,int *num)
{
	for (int i = 0; i < *num; i++) {
		printf("\n제목 :%s\n", mp[i].title);
		printf("가수 : %s\n", mp[i].singer);
		printf("위치 : %s\n", mp[i].location);
		printf("장르 : %d\n", mp[i].genre);
	}
	printf("\n");
}

void search(Mp3 *mp,int *num)
{
	char name[10];

	printf("어떤 곡을 검색하시겠습니까? ");
	scanf("%s", name);

	for (int i = 0; i < *num; i++) {
		if (strcmp(mp[i].title, name) == 0) {
			printf("\n제목 :%s\n", mp[i].title);
			printf("가수 : %s\n", mp[i].singer);
			printf("위치 : %s\n", mp[i].location);
			printf("장르 : %d\n", mp[i].genre);
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

		printf("정수값을 입력하시오 : ");
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