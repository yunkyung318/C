#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PIE 3.14

typedef struct {
	int x;
	int y;
}Point;

typedef struct {
	Point center;
	double radius;
}Circle;

double area(Circle c)
{
	return PIE * c.radius*c.radius;
}

double perimeter(Circle c)
{
	return 2 * PIE*c.radius;
}

void main()
{
	Point p;
	Circle c;

	printf("���� �߽��� : ");
	scanf("%d %d", &p.x, &p.y);

	printf("���� ������ : ");
	scanf("%lf", &c.radius);

	printf("���� ���� = %lf, ���� �ѷ� = %lf\n", area(c), perimeter(c));
}