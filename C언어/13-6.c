#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int x, y;
}Point;

int equal(Point *p1, Point *p2)
{
	if (((*p1).x == (*p2).x) && ((*p1).y == (*p2).y))
		return 1;
	else
		return 0;
}

void main()
{
	Point a, b;

	printf("ù ��° ���� x,y ��ǥ : ");
	scanf("%d %d", &a.x, &a.y);

	printf("�� ��° ���� x,y ��ǥ : ");
	scanf("%d %d", &b.x, &b.y);

	if (equal(&a, &b) == 1)
		printf("(%d,%d)=(%d,%d)", a.x, a.y, b.x, b.y);
	else
		printf("(%d,%d)!=(%d,%d)", a.x, a.y, b.x, b.y);
}