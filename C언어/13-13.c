#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int type;
	union {
		struct { int base, height; }tri;
		struct { int width, height; }rect;
		struct { int radius; }cir;
	}data;
}Shape;

void triangle(Shape shape) 
{
	printf("밑변과 높이를 입력하시오 : ");
	scanf("%d %d", &shape.data.tri.base, &shape.data.tri.height);

	int area = (shape.data.tri.base*shape.data.tri.height) / 2;
	printf("면적은 %d\n", area);
}

void rectangle(Shape shape)
{
	printf("가로와 세로를 입력하시오 : ");
	scanf("%d %d", &shape.data.rect.width, &shape.data.tri.height);

	int area = shape.data.rect.width*shape.data.tri.height;
	printf("면적은 %d\n", area);
}

void circle(Shape shape)
{
	printf("반지름 입력하시오 : ");
	scanf("%d", &shape.data.cir.radius);

	int area = shape.data.cir.radius*shape.data.cir.radius*3.141592;
	printf("면적은 %d\n", area);
}

void main()
{
	Shape shape;

	printf("도형의 타입을 입력하시오 (1, 2, 3) : ");
	scanf("%d", &shape.type);

	switch(shape.type)
	{
	case 1:
		triangle(shape);
		break;
	case 2:
		rectangle(shape);
		break;
	case 3:
		circle(shape);
		break;
	default:
		printf("다시 입력해주세요\n");
		break;
	}
}