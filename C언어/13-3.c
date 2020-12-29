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
	Email email = { "안부메일",
					"cuteyun@naver.com",
					"prettyyun@naver.com",
					"안녕하십니까? 별 일 없으신지요?","2019/10/22",
					1 };

	printf("제목 : %s\n", email.title);
	printf("수신자 : %s\n", email.sender);
	printf("발신자 : %s\n", email.receiver);
	printf("내용 : %s\n", email.content);
	printf("날짜 : %s\n", email.date);
	printf("우선 순위 : %d\n", email.priority);
}