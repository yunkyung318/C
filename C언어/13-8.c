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

	printf("원의 중심점 : ");
	scanf("%d %d", &p.x, &p.y);

	printf("원의 반지름 : ");
	scanf("%lf", &c.radius);

	printf("원의 면적 = %lf, 원의 둘레 = %lf\n", area(c), perimeter(c));
}