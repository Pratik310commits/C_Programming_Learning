#include <stdio.h>
#include <stdint.h>

typedef struct Shape
{
    void (*Display)(void);
} Shape;

typedef struct
{
    Shape shape;
    uint16_t radius;
} Circle;

typedef struct
{
    Shape shape;
    uint16_t length;
    uint16_t breadth;
} Rectangle;

void DisplayCircle(void);
void DisplayRectangle(void);
void DisplayShape(Shape *shape);

void InitCircle(Circle *cir, uint16_t radius);
void InitRectangle(Rectangle *rec, uint16_t len, uint16_t br);

int main()
{
    Circle circle1;
    uint16_t rad = 69;
    InitCircle(&circle1, rad);
    circle1.shape.Display = DisplayCircle;

    Rectangle rectangle1;
    uint16_t len = 96;
    uint16_t br = 69;
    InitRectangle(&rectangle1, len, br);
    rectangle1.shape.Display = DisplayRectangle;

    DisplayShape((Shape *)&circle1);
    DisplayShape((Shape *)&rectangle1);

    return 0;
}

void DisplayCircle()
{
    printf("Circle.\n");
}

void DisplayRectangle()
{
    printf("Rectangle.\n");
}

void DisplayShape(Shape *shape)
{
    shape->Display();
}

void InitCircle(Circle *cir, uint16_t radius)
{
    cir->radius = radius;
}

void InitRectangle(Rectangle *rec, uint16_t len, uint16_t br)
{
    rec->length = len;
    rec->breadth = br;
}