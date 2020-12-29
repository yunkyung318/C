#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int x;
	int y;
}Point;

int quadrant(Point p)
{
	if (p.x > 0 && p.y > 0)
		return 1;
	else if (p.x < 0 && p.y>0)
		return 2;
	else if (p.x < 0 && p.y < 0)
		return 3;
	else if (p.x > 0 && p.y < 0)
		return 4;
}

void main()
{
	Point p;
	
	printf("���� ��ǥ �Է�(x,y):");
	scanf("%d %d", &p.x, &p.y);

	printf("(%d,%d)�� ��и�=%d", p.x, p.y, quadrant(p));
}