#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct{
	char title[100];
	char sender[100];
	char receiver[100];
	char content[100];
	char date[100];
	int priority;
}Email;

void main()
{
	Email email = { "�Ⱥθ���",
					"cuteyun@naver.com",
					"prettyyun@naver.com",
					"�ȳ��Ͻʴϱ�? �� �� ����������?","2019/10/22",
					1 };

	printf("���� : %s\n", email.title);
	printf("������ : %s\n", email.sender);
	printf("�߽��� : %s\n", email.receiver);
	printf("���� : %s\n", email.content);
	printf("��¥ : %s\n", email.date);
	printf("�켱 ���� : %d\n", email.priority);
}