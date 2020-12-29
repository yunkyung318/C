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
	printf("�غ��� ���̸� �Է��Ͻÿ� : ");
	scanf("%d %d", &shape.data.tri.base, &shape.data.tri.height);

	int area = (shape.data.tri.base*shape.data.tri.height) / 2;
	printf("������ %d\n", area);
}

void rectangle(Shape shape)
{
	printf("���ο� ���θ� �Է��Ͻÿ� : ");
	scanf("%d %d", &shape.data.rect.width, &shape.data.tri.height);

	int area = shape.data.rect.width*shape.data.tri.height;
	printf("������ %d\n", area);
}

void circle(Shape shape)
{
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &shape.data.cir.radius);

	int area = shape.data.cir.radius*shape.data.cir.radius*3.141592;
	printf("������ %d\n", area);
}

void main()
{
	Shape shape;

	printf("������ Ÿ���� �Է��Ͻÿ� (1, 2, 3) : ");
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
		printf("�ٽ� �Է����ּ���\n");
		break;
	}
}